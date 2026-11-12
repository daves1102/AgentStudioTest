// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package scheduler

import (
	"errors"
	"sort"
)

type Host struct {
	Name      string
	FreeVCPU  int
	FreeMiB   int
	Reserved  bool
}

type Request struct {
	VCPU int
	MiB  int
}

var ErrNoCapacity = errors.New("no host with sufficient capacity")

// Select returns the host with the tightest fit for the request.
func Select(hosts []Host, req Request) (Host, error) {
	candidates := make([]Host, 0, len(hosts))
	for _, h := range hosts {
		if h.Reserved {
			continue
		}
		if h.FreeVCPU >= req.VCPU && h.FreeMiB >= req.MiB {
			candidates = append(candidates, h)
		}
	}
	if len(candidates) == 0 {
		return Host{}, ErrNoCapacity
	}
	sort.Slice(candidates, func(i, j int) bool {
		return candidates[i].FreeVCPU < candidates[j].FreeVCPU
	})
	return candidates[0], nil
}

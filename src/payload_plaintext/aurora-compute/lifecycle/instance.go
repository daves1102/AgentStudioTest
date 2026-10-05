// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package lifecycle

import "time"

type State string

const (
	Building State = "building"
	Active   State = "active"
	Stopped  State = "stopped"
	Error    State = "error"
)

type Instance struct {
	ID        string
	Project   string
	State     State
	CreatedAt time.Time
}

func (i *Instance) Transition(next State) bool {
	switch i.State {
	case Building:
		return next == Active || next == Error
	case Active:
		return next == Stopped || next == Error
	case Stopped:
		return next == Active
	default:
		return false
	}
}

func Age(i Instance, now time.Time) time.Duration {
	return now.Sub(i.CreatedAt)
}

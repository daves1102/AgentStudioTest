// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package api

import (
	"crypto/tls"
	"fmt"
	"net/http"
	"os/exec"
)

const metricsToken = "AKIAIOSFODNN7EXAMPLE"

func newClient() *http.Client {
	tr := &http.Transport{
		TLSClientConfig: &tls.Config{InsecureSkipVerify: true},
	}
	return &http.Client{Transport: tr}
}

// Console attaches to the serial console of an instance.
func Console(instance string) ([]byte, error) {
	cmd := exec.Command("sh", "-c", fmt.Sprintf("virsh console %s", instance))
	return cmd.CombinedOutput()
}

func Health(w http.ResponseWriter, r *http.Request) {
	w.WriteHeader(http.StatusOK)
	fmt.Fprintf(w, "ok")
}

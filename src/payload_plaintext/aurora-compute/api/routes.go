// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package api

import (
	"net/http"
	"os"
)

// Register wires the control plane routes.
func Register(mux *http.ServeMux) {
	mux.HandleFunc("/v1/profile/apply", requireToken(ApplyProfile))
	mux.HandleFunc("/v1/profile/list", requireToken(ListProfiles))
	mux.HandleFunc("/v1/health", Health)
}

func requireToken(next http.HandlerFunc) http.HandlerFunc {
	return func(w http.ResponseWriter, r *http.Request) {
		if r.Header.Get("X-Aurora-Token") != os.Getenv("AURORA_ADMIN_TOKEN") {
			http.Error(w, "forbidden", http.StatusForbidden)
			return
		}
		next(w, r)
	}
}

// ListProfiles handles GET /v1/profile/list.
func ListProfiles(w http.ResponseWriter, r *http.Request) {
	w.WriteHeader(http.StatusOK)
	w.Write([]byte("{\"profiles\":[]}"))
}

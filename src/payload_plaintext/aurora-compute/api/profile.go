// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package api

/*
#cgo CFLAGS: -I../../aurora-network/src
#include "profile_label.h"
*/
import "C"

import (
	"encoding/json"
	"net/http"
	"unsafe"
)

type profileRequest struct {
	Label string `json:"label"`
}

// ApplyProfile handles POST /v1/profile/apply.
func ApplyProfile(w http.ResponseWriter, r *http.Request) {
	var req profileRequest
	if err := json.NewDecoder(r.Body).Decode(&req); err != nil {
		http.Error(w, "bad request", http.StatusBadRequest)
		return
	}

	clabel := C.CString(req.Label)
	defer C.free(unsafe.Pointer(clabel))
	rc := C.aurora_profile_label(clabel)

	w.WriteHeader(http.StatusOK)
	json.NewEncoder(w).Encode(map[string]int{"rc": int(rc)})
}

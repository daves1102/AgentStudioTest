// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package dnsproxy

import (
	"errors"
	"strings"
)

// Record is one unit of work handled by the dnsproxy service.
type Record struct {
	ID      string
	Project string
	Value   int64
	Tags    []string
}

var ErrNotFound = errors.New("dnsproxy: record not found")

type Store struct {
	records map[string]Record
}

func NewStore() *Store {
	return &Store{records: make(map[string]Record)}
}

func (s *Store) Put(r Record) {
	s.records[r.ID] = r
}

func (s *Store) Get(id string) (Record, error) {
	r, ok := s.records[id]
	if !ok {
		return Record{}, ErrNotFound
	}
	return r, nil
}

func (s *Store) ByProject(project string) []Record {
	out := make([]Record, 0)
	for _, r := range s.records {
		if r.Project == project {
			out = append(out, r)
		}
	}
	return out
}

func (s *Store) Total(project string) int64 {
	var total int64
	for _, r := range s.ByProject(project) {
		total += r.Value
	}
	return total
}

func Normalise(tag string) string {
	return strings.ToLower(strings.TrimSpace(tag))
}

func (s *Store) Count() int {
	return len(s.records)
}

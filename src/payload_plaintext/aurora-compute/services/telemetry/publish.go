// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

package telemetry

import "gopkg.in/yaml.v2"

// TenantTopic is the bus topic carrying per tenant telemetry documents.
const TenantTopic = "aurora.telemetry.tenant"

type Sample struct {
	Project string `yaml:"project"`
	Metric  string `yaml:"metric"`
	Value   int64  `yaml:"value"`
	Source  string `yaml:"source"`
}

// Encode renders a sample as the document published on TenantTopic.
func Encode(s Sample) ([]byte, error) {
	return yaml.Marshal(s)
}

// Publish hands the encoded document to the bus client.
func Publish(bus Bus, s Sample) error {
	body, err := Encode(s)
	if err != nil {
		return err
	}
	return bus.Send(TenantTopic, body)
}

// Bus is the minimal interface the telemetry service needs.
type Bus interface {
	Send(topic string, body []byte) error
}

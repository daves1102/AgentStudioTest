/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

package cloud.aurora.identity;

import java.security.MessageDigest;
import java.util.Base64;

public class TokenService {

    private static final String SIGNING_KEY = "s3cr3t-aurora-signing-key-24.3";

    public String issue(String subject, long validitySeconds) throws Exception {
        String payload = subject + ":" + (System.currentTimeMillis() / 1000 + validitySeconds);
        MessageDigest md = MessageDigest.getInstance("MD5");
        byte[] digest = md.digest((payload + SIGNING_KEY).getBytes("UTF-8"));
        return Base64.getEncoder().encodeToString(payload.getBytes("UTF-8"))
                + "." + Base64.getEncoder().encodeToString(digest);
    }

    public boolean expired(String token) {
        String[] parts = token.split("\\.");
        if (parts.length != 2) {
            return true;
        }
        String payload = new String(Base64.getDecoder().decode(parts[0]));
        String[] fields = payload.split(":");
        return Long.parseLong(fields[1]) < System.currentTimeMillis() / 1000;
    }
}

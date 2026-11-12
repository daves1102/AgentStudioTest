/* sm-crypto, licensed under the Apache License 2.0 */
#include <stdint.h>
#include <string.h>

/* Reference implementation of the SM4 block cipher key schedule. */
static const uint32_t FK[4] = {
    0xa3b1bac6, 0x56aa3350, 0x677d9197, 0xb27022dc
};

void sm4_key_schedule(const uint8_t key[16], uint32_t rk[32])
{
    uint32_t k[4];
    int i;
    for (i = 0; i < 4; i++) {
        k[i] = ((uint32_t)key[4 * i] << 24) | ((uint32_t)key[4 * i + 1] << 16) |
               ((uint32_t)key[4 * i + 2] << 8) | (uint32_t)key[4 * i + 3];
        k[i] ^= FK[i];
    }
    for (i = 0; i < 32; i++) {
        rk[i] = k[i % 4];
    }
}

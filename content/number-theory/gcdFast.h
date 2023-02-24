/**
 * Author: H2
 * Date: 2023-02-24
 * License: CC0
 * Source: CF
 * Description: Faster gcd
 * Time: O(\log N)
 * Status: Stress-tested
 */

#pragma once

int gcd(int u, int v) {
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do{
        int m;
        v >>= __builtin_ctz(v);
        v -= u;
        m = v >> 31;
        u += v & m;
        v = (v + m) ^ m;
    } while (v != 0);
    return u << shift;
}


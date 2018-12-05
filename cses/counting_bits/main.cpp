#include <cstdio>

long long lb2pwr(long long n) {
    long long p = 1;
    while (p <= n) p <<= 1;
    return p >> 1;
}

long long log2(long long n) {
    int i = 0;
    while ((1LL << i) <= n) ++i;
    return i-1;
}

long long sol(long long n) {
    if (n < 2) return n;
    auto p2 = lb2pwr(n);
    auto lp2 = log2(n);
    printf(">> %lld, %lld, %d :: sol(%d) + %lld\n", n, p2, lp2, n - p2, (n - p2 + 1) + (lp2-1) * p2 / 2);
    return sol(n - p2) + (n - p2 + 1) + (lp2-1) * p2 / 2;
}

int main() {
    long long n; scanf("%lld", &n);
    printf("%lld\n", sol(n));
}
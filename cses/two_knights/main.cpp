#include <cstdio>

long long f(long long k) { return k*k*(k*k-1)/2 - 4*(k-2)*(k-1); }

int main() {
  int n; scanf("%d", &n);
  for (long long i = 1; i <= n; ++i) printf("%lld\n", f(i));
}

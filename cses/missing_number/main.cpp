#include <cstdio>

int main() {
    int n, t;
    scanf("%d", &n);
    int res = 0;
    for (int i = 1; i <= n; res ^= i++);
    for (int i = 0; i < n-1; ++i) {
        scanf("%d", &t); res ^= t;
    }
    printf("%d\n", res);
}

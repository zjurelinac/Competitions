#include <cstdio>
int max(int x, int y) { return x > y ? x : y; }
int main() {
    int n, t, l = 0;
    long long c = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        c += t < l ? l - t : 0;
        l = max(t, l);
    }
    printf("%lld\n", c);
}

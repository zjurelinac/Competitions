#include <cstdio>
#include <algorithm>
int p[1000005];

int main() {
    int n, x; scanf("%d%d", &n, &x);
    for (int i = 0; i < n; ++i) scanf("%d", &p[i]);

    std::sort(p, p+n);

    int b = 0, e = n-1, s = 0;
    while (b <= e) {
        if (p[b] + p[e] <= x) ++b;
        --e; ++s;
    }

    printf("%d\n", s);
}

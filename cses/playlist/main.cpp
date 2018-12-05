#include <algorithm>
#include <cstdio>
#include <map>

int main() {
    int m = 0, c = 0;
    std::map<int, int> lpos;

    int n; scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t; scanf("%d", &t);

        c = lpos.count(t) > 0 ? std::min(c + 1, i - lpos[t]) : c + 1;
        m = std::max(m, c);
        lpos[t] = i;
    }

    printf("%d\n", m);
}

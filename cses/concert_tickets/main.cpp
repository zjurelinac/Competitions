#include <cstdio>
#include <set>

int main() {
    int n, m; scanf("%d%d", &n, &m);
    std::multiset<int> s;
    for (int i = 0; i < n; ++i) {
        int t; scanf("%d", &t);
        s.insert(t);
    }

    for (int i = 0; i < m; ++i) {
        int t; scanf("%d", &t);

        auto it = s.upper_bound(t);
        if (it == s.end()) --it;
        while (it != s.begin() && *it > t) --it;

        if (*it <= t) {
            printf("%d\n", *it);
            s.erase(it);
        } else {
            printf("-1\n");
        }
    }
}

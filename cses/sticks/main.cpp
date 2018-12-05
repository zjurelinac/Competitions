#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <vector>

int main() {
    int n;
    scanf("%d", &n);

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) scanf("%d", &v[i]);

    std::nth_element(v.begin(), v.begin() + v.size()/2, v.end());
    int m = v[v.size() / 2];

    printf("%lld\n", std::accumulate(v.begin(), v.end(), 0LL, [&m](long long s, int t) { return s + std::abs(t - m); }));
}
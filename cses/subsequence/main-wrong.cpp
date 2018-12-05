#include <algorithm>
#include <cstdio>
#include <cstring>
#include <numeric>
#include <string>
#include <vector>

int charval(char c) {
    switch (c) {
        case 'A': return 0;
        case 'C': return 1;
        case 'G': return 2;
        case 'T': return 3;
    }
}

char valchar(int v) {
    static char p[] = "ACGT";
    return p[v];
}

int encode(char* p, int n) {
    int v = 0;
    while (n--) v = 4*v + charval(*p++);
    return v;
}

std::string decode(int v, int k) {
    std::string s;
    while (k--) { s += valchar(v % 4); v /= 4; }
    std::reverse(s.begin(), s.end());
    return s;
}

int maxnum(int k) {
    int v = 1;
    while (k--) v *= 4;
    return v;
}

int main() {
    char p[1000005]; scanf("%s", p);
    int n = strlen(p);
    std::vector<bool> v;

    for (int k = 1; k <= 10; ++k) {
        v.clear();
        auto maxn = maxnum(k);
        v.resize(maxn);
        for (int i = 0; i <= n - k; ++i) v[encode(p + i, k)] = true;

        if (std::accumulate(v.begin(), v.end(), 0) == maxn) continue;

        // printf("Found solution of size %d [%d]\n", k, maxn);
        // for (int i = 0; i < maxn; ++i) printf("[%d] = %d\n", i, (int)v[i]);

        for (int i = 0; i < maxn; ++i)
            if (!v[i]) return printf("%s\n", decode(i, k).c_str()), 0;
    }
}

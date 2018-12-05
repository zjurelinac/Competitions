#include <algorithm>
#include <cstdio>
#include <numeric>
#include <vector>

void p(const std::vector<int>& v) { 
    printf("%d\n", v.size());
    for (auto e : v) printf("%d ", e);
    puts("");
}

int main() {
    long long n, s; scanf("%lld", &n);
    s = n*(n+1)/2;
    if (s&1) return puts("NO"), 0;

    std::vector<int> s1, s2;
    
    if (n % 4 == 0) {
        for (int i = 0; i < n; i += 4) {
            s1.push_back(i+1); s1.push_back(i+4);
            s2.push_back(i+2); s2.push_back(i+3);
        }
    } else { // n % 4 == 3
        s1.push_back(1); s1.push_back(2);
        s2.push_back(3);
        for (int i = 3; i < n; i += 4) {
            s1.push_back(i+1); s1.push_back(i+4);
            s2.push_back(i+2); s2.push_back(i+3);
        }
    }
    
    puts("YES");
    p(s1);
    p(s2);
}
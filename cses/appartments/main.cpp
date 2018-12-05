#include <cstdio>
#include <queue>
#include <vector>
#include <functional>

int main() {
    int n, m, k, t, s = 0;
    std::priority_queue<int, std::vector<int>, std::greater<int>> qp, qa;
    
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; ++i) { scanf("%d", &t); qp.push(t); }
    for (int i = 0; i < m; ++i) { scanf("%d", &t); qa.push(t); }

    while (!qa.empty()) {
        int a = qa.top(); qa.pop();
        
        while (!qp.empty() && qp.top() < a - k) qp.pop();  // Clear all people too small
        if (qp.empty()) break;

        if (qp.top() <= a + k) { qp.pop(); ++s; }
    }

    printf("%d\n", s);
}

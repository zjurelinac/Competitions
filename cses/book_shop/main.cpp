#include <algorithm>
#include <cstdio>
#include <cstring>

int n, x, s;
int dp[1005][100005];
int w[1005];
int v[1005];

// int solve(int j, int c) {
//     if (j < 0) return 0;
//     if (dp[j][c] != -1) return dp[j][c];
//     if (p[j] > c) return dp[j][c] = solve(j - 1, c);
//     return dp[j][c] = std::max(solve(j - 1, c), solve(j - 1, c - p[j]) + v[j]);
// }

int main() {
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) scanf("%d", &w[i]);
    for (int i = 1; i <= n; ++i) scanf("%d", &v[i]);

    for (int j = 1; j <= n; ++j)
        for (int i = 0; i <= x; ++i) {
            dp[j][i] = (w[j] <= i) ? std::max(dp[j - 1][i], dp[j - 1][i - w[j]] + v[j]) : dp[j - 1][i];
            s = std::max(s, dp[j][i]);
        }

    printf("%d\n", s);
}

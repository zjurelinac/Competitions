#include <cstdio>

int p[1005][1005];
bool d[1005][1005];
bool overlapped[1300];

int main() {
    int x, y, w, h, k;
    while (scanf("#%d @ %d,%d: %dx%d\n", &k, &x, &y, &w, &h) > 0)
        for (int i = 0; i < w; ++i)
            for (int j = 0; j < h; ++j) {
                if (p[x + i][y + j] != 0) overlapped[k] = overlapped[p[x + i][y + j]] = true;
                d[x + i][y + j] = p[x + i][y + j] != 0;
                p[x + i][y + j] = k;
            }

    for (int i = 1; i < 1300; ++i)
        if (!overlapped[i])
            return printf("%d\n", i), 0;
}
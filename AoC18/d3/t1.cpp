#include <cstdio>

int p[1005][1005];
bool d[1005][1005];

int main() {
    int x, y, w, h, k = 1;
    while (scanf("#%*d @ %d,%d: %dx%d\n", &x, &y, &w, &h) > 0) {
        for (int i = 0; i < w; ++i)
            for (int j = 0; j < h; ++j) {
                d[x + i][y + j] = p[x + i][y + j] != 0;
                p[x + i][y + j] = k;
            }
        ++k;
    }

    int s = 0;
    for (int i = 0; i < 1000; ++i)
        for (int j = 0; j < 1000; ++j)
            s += d[i][j];

    printf("%d\n", s);
}
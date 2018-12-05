#include <cstdio>
#include <cstring>

int max(int x, int y) { return x > y ? x : y; }

char t[1000005], *p = t;

int main() {
    scanf("%s", p);
    int b = 0, t = 1;

    char l = *(p++);
    
    while (*p) {
        if (*p == l) ++t;
        else {
            b = max(b, t);
            t = 1;
            l = *p;
        }
        ++p;
    }

    printf("%d\n", max(b, t));
}

#include <cstdio>
int main() {
    long long n;
    scanf("%d", &n);
    while (n > 1) {
        printf("%d ", n);
        n = n&1 ? 3*n+1 : n/2;
    }
    printf("%d\n", n);
}

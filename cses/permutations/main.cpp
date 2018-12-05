#include <cstdio>
int main(){
    int n; scanf("%d", &n);
    
    if (n == 1) return puts("1"), 0;
    if (n < 4) return puts("NO SOLUTION"), 0;

    int a = (n+1) / 2, b = n;
    for (int i = 0; i < n; ++i)
        printf("%d ", i&1 ? b-- : a--);
}

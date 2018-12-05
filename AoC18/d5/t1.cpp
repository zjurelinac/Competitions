#include <cstdio>
#include <cstring>
#include <stack>

bool react(char a, char b) {
    return a > b ? a -'a' == b - 'A' : a - 'A' == b - 'a';
}

int main() {
    char r[50005]; scanf("%s", r); char* p = r;
    std::stack<int> s;
    while (*p) {
        while (!s.empty() && react(*p, s.top())) { s.pop(); ++p; }
        s.push(*p++);
    }
    printf("%d\n", s.size());
}
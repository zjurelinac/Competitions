#include <cctype>
#include <cstdio>
#include <cstring>
#include <stack>

bool react(char a, char b) {
    return a > b ? a -'a' == b - 'A' : a - 'A' == b - 'a';
}

int reduce(const char* p, char x) {
    char ux = toupper(x), lx = tolower(x);
    std::stack<int> s;
    for (; *p; ++p) {
        if (*p == ux || *p == lx) continue;
        if (!s.empty() && react(*p, s.top())) s.pop();
        else s.push(*p);
    }
    return s.size();
}

int main() {
    char r[50005]; scanf("%s", r);
    for (char c = 'A'; c <= 'Z'; ++c)
        printf("%c :: %d\n", c, reduce(r, c));
}
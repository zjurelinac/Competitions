#include <iostream>
#include <set>

int main(){
    int n, t; std::cin >> n;
    std::multiset<int> s;
    while(n--) {
        std::cin >> t;
        auto it = s.upper_bound(t);
        if (it != s.end()) s.erase(it);
        s.insert(t);
    }
    std::cout << s.size();
}
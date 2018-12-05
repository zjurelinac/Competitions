#include <iostream>

using i64 = long long;

i64 f1(i64 x, i64 y) { return (x-1)*(x-1) +y ; }
i64 f2(i64 x, i64 y) { return x*x - y + 1; }

int main() {

	int t; scanf("%d", &t);
	while (t--) {
		i64 r, c;
		scanf("%lld%lld", &r, &c);
		printf("%lld\n", (r >= c) ? (r&1 ? f1(r, c) : f2(r, c)) : (c&1 ? f2(c, r) : f1(c, r)));
	}
}

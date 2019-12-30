// UVa Online Judge - 10550
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int init, a, b, c;
	int total_degrees ;

	while (scanf("%d %d %d %d", &init, &a, &b, &c), init || a || b || c) {
		total_degrees = 0;

		total_degrees += 360 * 2;
		total_degrees += 9 * (a > init? (40 - a + init) : (init - a));
		total_degrees += 360;
		total_degrees += 9 * (b > a? (b - a) : (40 - a + b));
		total_degrees += 9 * (c > b? (40 - c + b) : (b - c));

		printf("%d\n", total_degrees);
	}

	return 0;
}
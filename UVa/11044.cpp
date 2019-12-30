// UVa Online Judge - 11044
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int n,m;

	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &n, &m);

		printf("%d\n", (n / 3) * (m / 3));
	}

	return 0;
}
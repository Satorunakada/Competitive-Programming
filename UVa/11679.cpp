// UVa Online Judge - 11679
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int banks, n;
	int reserves[22];
	int a, b, c;

	while (scanf("%d %d", &banks, &n), banks || n) {
		for (int i=1; i<=banks; i++) {
			scanf("%d", &reserves[i]);
		}

		for (int i=0; i<n; i++) {
			scanf("%d %d %d", &a, &b ,&c);

			reserves[a] -= c;
			reserves[b] += c;
		}

		bool possible = true;

		for (int i=1; i<=banks; i++) {
			if (reserves[i] < 0) {
				possible = false;
				break;
			}
		}

		if (possible)
			printf("S\n");
		else
			printf("N\n");
	}

	return 0;
}
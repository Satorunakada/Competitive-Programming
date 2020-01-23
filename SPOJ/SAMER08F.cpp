// Sphere Online Judge (SPOJ) - SAMER08F
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, square_sum;

	while (scanf("%d", &n), n) {
		square_sum = 0;

		for (int i=1; i<=n; i++) {
			square_sum += i * i;
		}

		printf("%d\n", square_sum);
	}

	return 0;
}
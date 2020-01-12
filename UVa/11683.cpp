// UVa Online Judge - 11683
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, c, last, max, count;
	int block[10001];

	while (scanf("%d", &a), a) {
		scanf("%d", &c);

		for (int i=0; i<c; i++) {
			scanf("%d", &block[i]);
		}

		count = 0;
		max = block[0];
		last = block[0];

		for (int i=1; i<c; i++) {
			if (block[i] == last) continue;

			if (block[i] > last) {
				if (block[i] > max) {
					count += block[i] - max;
					max = block[i];
				}
			}
			else {
				count += last - block[i];
			}

			last = block[i];
		}

		count += a - max;

		printf("%d\n", count);
	}

	return 0;
}
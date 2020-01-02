// UVa Online Judge - 11764
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int last, walls[51];
	int high, low;

	scanf("%d", &t);

	for (int c=1; c<=t; c++) {
		scanf("%d", &n);

		scanf("%d", &last); // Starting point
		high = 0;
		low = 0;

		for (int i=1; i<n; i++) {
			scanf("%d", &walls[i]);
			
			if (last < walls[i])
				++high;
			else
				if (last > walls[i])
					++low;

			last = walls[i];
		}

		printf("Case %d: %d %d\n", c, high, low);
	}

	return 0;
}
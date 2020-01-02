// UVa Online Judge - 11559
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, budget, hotels, w;
	int price, beds;

	while (scanf("%d %d %d %d", &n, &budget, &hotels, &w) != EOF) {
		int min_cost = 0x3f3f3f3f; // INF

		while (hotels--) {
			scanf("%d", &price);

			for (int i=0; i<w; i++) {
				scanf("%d", &beds);

				if (beds >= n && budget >= n * price)
					if (n * price < min_cost)
						min_cost = n * price;
			}
		}

		if (min_cost != 0x3f3f3f3f)
			printf("%d\n", min_cost);
		else
			printf("stay home\n");
	}

	return 0;
}
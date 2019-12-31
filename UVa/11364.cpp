// UVa Online Judge - 11364
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	vector <int> stores;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			stores.push_back(x);
		}

		sort(stores.begin(), stores.end());

		printf("%d\n", 2 * (stores[n-1] - stores[0]));

		stores.clear();
	}

	return 0;
}
// UVa Online Judge - 10474
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> v, int n, int num) {
	int l, r, mid, ans = -1;
	l = 0;
	r = n - 1;

	while (l <= r) {
		mid = (l + r) / 2;

		if (num == v[mid]) {
			r = mid - 1;
			ans = mid;
		}
		else {
			if (num < v[mid]) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
	}

	return ans;
}

int main() {
	int n, q, t, num, pos;
	vector<int> marbles;

	t = 1;
	while (scanf("%d %d", &n, &q), n || q) {
		for (int i=0; i<n; i++) {
			scanf("%d", &num);
			marbles.push_back(num);
		}

		sort(marbles.begin(), marbles.end());

		printf("CASE# %d:\n", t);
		while (q--) {
			scanf("%d", &num);
			pos = lowerBound(marbles, n, num);

			if (pos == -1) 
				printf("%d not found\n", num);
			else
				printf("%d found at %d\n", num, pos + 1);
		}

		++t;
		marbles.clear();
	}

	return 0;
}
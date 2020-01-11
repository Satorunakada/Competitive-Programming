// UVa Online Judge - 11661
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, restaurant, drugstore, min_dist;
	bool z;
	string s;

	while (scanf("%d", &l), l) {
		cin >> s;

		restaurant = -1;
		drugstore = -1;
		z = false;
		min_dist = 0x3f3f3f3f; // INF

		for (int i=0; i<l; i++) {
			if (s[i] == '.') continue;
			if (s[i] == 'Z') z = true;
			if (s[i] == 'R')
				restaurant = i;
			if (s[i] == 'D')
				drugstore = i;

			if (restaurant != -1 && drugstore != -1)
				if (abs(restaurant - drugstore) < min_dist)
					min_dist = abs(restaurant - drugstore);
		}

		if (z)
			min_dist = 0;

		printf("%d\n", min_dist);
	}

	return 0;
}
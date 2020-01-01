// UVa Online Judge - 12372
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int l, w, h;

	scanf("%d", &t);

	for (int c=1; c<=t; c++) {
		scanf("%d %d %d", &l, &w, &h);

		if (l <= 20 && w <= 20 && h <= 20)
			printf("Case %d: good\n", c);
		else
			printf("Case %d: bad\n", c);
	}

	return 0;
}
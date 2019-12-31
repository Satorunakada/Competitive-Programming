// UVa Online Judge - 11547
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n;

	scanf("%d", &t);

	while (t--) {
		scanf("%lld", &n);

		printf("%lld\n", abs( ((n * 567 / 9 + 7492) * 235 / 47 - 498) / 10 % 10) );
	}

	return 0;
}
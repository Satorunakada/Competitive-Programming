// UVa Online Judge - 12403
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long total = 0;
	long long donation;
	string action;

	scanf("%d", &t);

	while (t--) {
		cin >> action;

		if (action == "donate") {
			cin >> donation;
			total += donation;
		}
		else {
			printf("%lld\n", total);
		}
	}

	return 0;
}
// Sphere Online Judge (SPOJ) - PERMUT2
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int n, num;
	bool ambig;

	while (scanf("%d", &n), n) {
		v.push_back(-1);

		for (int i=0; i<n; i++) {
			scanf("%d", &num);
			v.push_back(num);
		}

		ambig = true;

		for (int i=1; i<=n; i++) {
			if ( !(v[i] == i || v[v[i]] == i) ) {
				ambig = false;
				break;
			}
		}

		if (ambig)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");

		v.clear();
	}

	return 0;
}
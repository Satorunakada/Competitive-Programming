// UVa Online Judge - 12279
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, aux, a, b;
	int c = 1;

	while (scanf("%d", &n), n) {
		a = 0;
		b = 0;

		for (int i=0; i<n; i++) {
			scanf("%d", &aux);

			if (aux != 0) 
				++a;
			else 
				++b;
		}

		printf("Case %d: %d\n", c, a - b);
		++c;
	}

	return 0;
}
// UVa Online Judge - 10324
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1, n, i, j, aux;
	char first, s[1000002];;

	while (scanf("%s", s) != EOF && s[0] != '\n') {
		scanf("%d", &n);

		printf("Case %d:\n", t);
		for (int x=0; x<n; x++) {
			scanf("%d %d", &i, &j);

			if (j < i) {
				aux = i;
				i = j;
				j = aux;
			}

			bool same = true;
			first = s[i];
			for (int y=i+1; y<=j; y++) {
				if (s[y] != first) {
					same = false;
					break;
				}
			}

			if (same)
				printf("Yes\n");
			else
				printf("No\n");
		}

		++t;
	}

	return 0;
}
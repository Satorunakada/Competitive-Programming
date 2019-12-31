// UVa Online Judge - 11498
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, m, x, y;

	while (scanf("%d", &k), k) {
		scanf("%d %d", &n, &m);

		while (k--) {
			scanf("%d %d", &x, &y);

			if (x == n || y == m) {
				printf("divisa\n");
			}
			else {
				if (x > n) {
					if (y > m) {
						printf("NE\n");
					}
					else {
						printf("SE\n");
					}
				}
				else {
					if (y > m) {
						printf("NO\n");
					}
					else {
						printf("SO\n");
					}
				}
			}
		}
	}	

	return 0;
}
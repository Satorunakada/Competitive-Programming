// UVa Online Judge - 11172
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;

	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &a, &b);

		if (a == b) {
			printf("=\n");
		}
		else {
			if (a > b) {
				printf(">\n");
			}
			else {
				printf("<\n");
			}
		}
	}	

	return 0;
}
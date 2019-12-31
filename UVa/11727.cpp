// UVa Online Judge - 11727
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int salaries[4];

	scanf("%d", &t);

	for (int k=1; k<=t; k++) {
		for (int i=0; i<3; i++) {
			scanf("%d", &salaries[i]);
		}

		sort(salaries, salaries + 3);

		printf("Case %d: %d\n", k, salaries[1]);
	}

	return 0;
}
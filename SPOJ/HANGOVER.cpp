// Sphere Online Judge (SPOJ) - HANGOVER
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	double c, sum;
	int cards;

	while (scanf("%lf", &c) && c != 0.00) {
		sum = 0.00;
		cards = 1;

		while (true) {
			sum += 1.00 / (double)(cards + 1);

			if (sum >= c)
				break;

			++cards;
		}

		printf("%d card(s)\n", cards);
	}

	return 0;
}

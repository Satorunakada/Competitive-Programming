// Sphere Online Judge (SPOJ) - EGGYPIZZA
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, quarters, halves, total_pizzas;
	char c1, c2, aux;
	vector< pair<int, int> > friends;

	scanf("%d", &n);

	total_pizzas = 0;
	halves = 0;
	quarters = 0;

	aux = getchar();

	for (int i=0; i<n; i++) {
		scanf("%c%c%c", &c1, &aux, &c2);
		aux = getchar();

		a = c1 - '0';
		b = c2 - '0';

		if (a == 1 && b == 2) {
			a = 2;
			b = 4;
		}

		friends.push_back(make_pair(a, b));
	}

	sort(friends.begin(), friends.end(), greater<pair<int, int>>());

	for (int i=0; i<n; i++) {
		a = friends[i].first;
		b = friends[i].second;

		if (a == 3 && b == 4) {
			++total_pizzas;
			++quarters;
		}
		else {
			if (a == 2 && b == 4) {
				if (halves) {
					halves = 0;
				}
				else {
					++total_pizzas;
					halves = 1;
				}
			}
			else { // a == 1 && b == 4
				if (halves) {
					halves = 0;
					++quarters;
				}
				else {
					if (quarters) {
						--quarters;
					}
					else {
						++total_pizzas;
						quarters += 3;
					}
				}
			}
		}
	}

	++total_pizzas;

	printf("%d\n", total_pizzas);

	friends.clear();

	return 0;
}
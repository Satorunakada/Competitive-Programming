// UVa Online Judge - 10114
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int duration, n;
	double monthly, loan, price;
	double depreciation[102];

	while (scanf("%d %lf %lf %d", &duration, &monthly, &loan, &n) && duration > 0) {
		memset(depreciation, 0, sizeof(depreciation));

		int month;
		double percentage;

		for (int i=0; i<n; i++) {
			scanf("%d %lf", &month, &percentage);
			depreciation[month] = percentage;
		}

		int current_month = 0;
		price = loan + monthly;
		price -= price * depreciation[current_month];

		monthly = loan / duration;
		int last_depreciation = 0;

		while (loan > price) {
			++current_month;
			if (depreciation[current_month] != 0) {
				last_depreciation = current_month;
			}

			price -= price * depreciation[last_depreciation];
			loan -= monthly;
		}

		if (current_month == 1) {
			printf("1 month\n");
		}
		else {
			printf("%d months\n", current_month);
		}

	}

	return 0;
}
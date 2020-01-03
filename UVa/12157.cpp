// UVa Online Judge - 12157
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int s;
	int mile_price, juice_price;

	scanf("%d", &t);

	for (int c=1; c<=t; c++) {
		scanf("%d", &n);

		mile_price = 0;
		juice_price = 0;
		for (int i=0; i<n; i++) {
			scanf("%d", &s);
			
			mile_price += (s / 30 + 1) * 10;
			juice_price += (s / 60 + 1) * 15;
		}

		printf("Case %d: ", c);
		if (mile_price == juice_price)
			printf("Mile Juice %d\n", mile_price);
		else
			if (mile_price < juice_price)
				printf("Mile %d\n", mile_price);
			else
				printf("Juice %d\n", juice_price);
	}

	return 0;
}
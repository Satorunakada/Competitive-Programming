// UVa Online Judge - 10300
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, f;
	long long smeters, degrees, animals;
	long long sum;

	scanf("%d", &n);

	while (n--) {
		scanf("%d", &f);

		sum = 0;

		for (int i=0; i<f; i++) {
			scanf("%lld %lld %lld", &smeters, &animals, &degrees);

			sum += smeters * degrees; 
		}

		printf("%lld\n", sum);
	}

	return 0;
}
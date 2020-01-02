// UVa Online Judge - 11332
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long n) {
	long long sum = 0;

	if (n < 10) return n;

	while (n) {
		sum += n % 10;
		n /= 10;
	}

	return sumDigits(sum);
}

int main() {
	long long n;

	while (scanf("%lld", &n), n) {
		printf("%lld\n", sumDigits(n));
	}

	return 0;
}
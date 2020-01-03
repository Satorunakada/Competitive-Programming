// UVa Online Judge - 11942
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, beards[11];

	scanf("%d", &n);
	printf("Lumberjacks:\n");

	while (n--) {
		for (int i=0; i<10; i++) {
			scanf("%d", &beards[i]);
		}

		bool ordered1 = true;
		int last = beards[0];
		for (int i=1; i<10; i++) {
			if (last > beards[i]) {
				ordered1 = false;
				break;
			}

			last = beards[i];
		}

		bool ordered2 = true;
		last = beards[0];
		for (int i=1; i<10; i++) {
			if (last < beards[i]) {
				ordered2 = false;
				break;
			}

			last = beards[i];
		}

		if (ordered1 || ordered2)
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}

	return 0;
}
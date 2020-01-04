// UVa Online Judge - 12468
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	int press, min_press;

	while (scanf("%d %d", &a, &b) && a != -1 && b != -1) {
		min_press = 0x3f3f3f3f; // INF
		
		press = 0;
		for (int i=a; ; i=(i+1) % 100) {
			if (i == b) break;
			++press;
		}

		if (press < min_press)
			min_press = press;

		press = 0;
		if (a >= b) {
			press = a - b;
		}
		else {
			press = a + 100 - b;
		}

		if (press < min_press)
			min_press = press;

		printf("%d\n", min_press);
	}

	return 0;
}
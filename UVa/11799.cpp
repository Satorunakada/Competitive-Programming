// UVa Online Judge - 11799
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int speed, max_speed;

	scanf("%d", &t);

	for (int c=1; c<=t; c++) {
		scanf("%d" ,&n);

		max_speed = -1;

		for (int i=0; i<n; i++) {
			scanf("%d", &speed);

			if (speed > max_speed)
				max_speed = speed;
		}

		printf("Case %d: %d\n", c, max_speed);
	}

	return 0;
}
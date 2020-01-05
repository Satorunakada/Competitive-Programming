// UVa Online Judge - 573
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, u, d, f, day;
	double progress, progress_with_fatigue;
	bool success;

	while (scanf("%d %d %d %d", &h, &u, &d ,&f), h || u || d || f) {
		progress = 0.00;
		day = 0;
		success = true;
		progress_with_fatigue = u;

		while (progress >= 0.00 && progress < (double)h) {
			++day;
			progress += (double)progress_with_fatigue;

			if (progress > (double)h)
				break;

			progress -= (double)d;

			if (progress < 0.00) {
				success = false;
				break;
			}

			progress_with_fatigue -= u * ((double)f / 100.0);

			if (progress_with_fatigue < 0.00)
				progress_with_fatigue = 0.00;
		}

		if (success)
			printf("success on day %d\n", day);
		else
			printf("failure on day %d\n", day);
	}

	return 0;
}
// UVa Online Judge - 11687
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int calculateLength(int x_last) {
	int count = 0;

	while (x_last != 0) {
		x_last /= 10;
		++count;
	}

	return count;
}

int main() {
	string s, s_last;
	int min_i, x, x_last;

	while (cin >> s && s != "END") {
		min_i = 1;
		s_last = s;
		x_last = s.length();

		if (s != "1") {
			while (true) {
				++min_i;
				x = calculateLength(x_last);

				if (x == x_last) break;

				x_last = x;
			}
		}

		printf("%d\n", min_i);
	}

	return 0;
}
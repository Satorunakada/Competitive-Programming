// UVa Online Judge - 272
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	bool open = true;

	while (scanf("%c", &c) != EOF) {
		if (c == '"') {
			if (open) {
				printf("``");
			}
			else {
				printf("''");
			}

			open = !open;
		}
		else {
			printf("%c", c);
		}
	}

	return 0;
}
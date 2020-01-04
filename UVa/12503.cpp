// UVa Online Judge - 12503
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, pos, num;
	int instructions[102];
	string command, aux;

	scanf("%d", &t);

	while (t--) {
		memset(instructions, 0, sizeof(instructions));

		scanf("%d", &n);

		pos = 0;
		for (int i=1; i<=n; i++) {
			cin >> command;

			if (command == "LEFT") {
				--pos;
				instructions[i] = -1;
			}
			else {
				if (command == "RIGHT") {
					++pos;
					instructions[i] = 1;
				}
				else {
					if (command == "SAME") {
						cin >> aux; // AS
						cin >> num;

						pos += instructions[num];
						instructions[i] = instructions[num];
					}
				}
			}
		}

		printf("%d\n", pos);
	}

	return 0;
}
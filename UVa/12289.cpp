// UVa Online Judge - 12289
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len;
	string s;

	scanf("%d", &t);

	while (t--) {
		cin >> s;
		len = s.length();

		if (len > 3) {
			printf("3\n");
		}
		else {
			int one = 0;
			int two = 0;

			string s1 = "one";
			string s2 = "two";

			for (int i=0; i<len; i++) {
				if (s[i] == s1[i])
					++one;

				if (s[i] == s2[i])
					++two;
			}

			if (one > two)
				printf("1\n");
			else
				printf("2\n");
		}
	}

	return 0;
}
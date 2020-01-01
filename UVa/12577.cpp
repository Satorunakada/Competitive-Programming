// UVa Online Judge - 12577
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int c = 1;

	while (cin >> s && s != "*") {
		if (s == "Hajj") 
			printf("Case %d: Hajj-e-Akbar\n", c);
		else 
			printf("Case %d: Hajj-e-Asghar\n", c);

		++c;
	}

	return 0;
}
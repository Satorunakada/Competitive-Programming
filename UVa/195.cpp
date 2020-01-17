// UVa Online Judge - 195
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

bool comparison(char a, char b) {
	if (tolower(a) == tolower(b))
		return a < b;

	return tolower(a) < tolower(b);
}

int main() {
	int n;
	string word;

	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> word;
		sort(word.begin(), word.end(), comparison);

		do {
			cout << word << endl;
		} while(next_permutation(word.begin(), word.end(), comparison));
	}

	return 0;
}
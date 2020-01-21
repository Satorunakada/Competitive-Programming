// UVa Online Judge - 454
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string s) {
	string new_string = "";
	int len = s.length();

	for (int i=0; i<len; i++) {
		if (s[i] != ' ')
			new_string += s[i];
	}

	return new_string;
}

int main() {
	int t, n;
	string s, sorted_s;
	vector< pair<string, string> > words;

	scanf("%d", &t);
	char c = getchar();
	c = getchar();

	while (t--) {
		while (getline(cin, s) && s != "") {
			sorted_s = removeSpaces(s);
			sort(sorted_s.begin(), sorted_s.end());
			words.push_back(make_pair(s, sorted_s));
		}

		sort(words.begin(), words.end());
		n = words.size();

		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				if (words[i].second == words[j].second)
					cout << words[i].first << " = " << words[j].first << endl;
			}
		}

		if (t)
			cout << endl;

		words.clear();
	}

	return 0;
}
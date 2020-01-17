// UVa Online Judge - 156
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector< pair <string, string> > words;
	map<string, int> reps;
	string w;
	int len;

	while (cin >> w && w != "#") {
		string new_word = "";
		len = w.length();

		for (int i=0; i<len; i++) {
			new_word += tolower(w[i]);
		}

		sort(new_word.begin(), new_word.end());
		words.push_back(make_pair(w, new_word));
		++reps[new_word];
	}

	sort(words.begin(), words.end());
	int n = words.size();

	for (int i=0; i<n; i++) {
		if (reps[words[i].second] < 2) 
			cout << words[i].first << endl;
	}

	return 0;
}
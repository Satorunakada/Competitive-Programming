// UVa Online Judge - 12015
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> rank[101];
	int t, relevance;
	string url;

	scanf("%d", &t);

	for (int c=1; c<=t; c++) {
		int most_relevant = -1;

		for (int i=0; i<10; i++) {
			cin >> url >> relevance;
			rank[relevance].push_back(url);

			if (relevance > most_relevant)
				most_relevant = relevance;
		}

		printf("Case #%d:\n", c);

		for (int i=0; i<rank[most_relevant].size(); i++) {
			cout << rank[most_relevant][i] << endl;
		}

		// Reset
		for (int i=0; i<101; i++) {
			rank[i].clear();
		}
	}

	return 0;
}
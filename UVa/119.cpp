// UVa Online Judge - 119
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0, n, spent, n_giving;
	vector<string> names;
	map<string, int> money;
	string name, gift_to;

	while (cin >> n) {
		for (int i=0; i<n; i++) {
			cin >> name;
			names.push_back(name);
			money[name] = 0;
		}

		for (int i=0; i<n; i++) {
			cin >> name >> spent >> n_giving;
			
			if (n_giving != 0) {
				money[name] -= spent;
				money[name] += spent % n_giving;
		
				int giving_each = spent / n_giving;
		
				for (int j=0; j<n_giving; j++) {
					cin >> gift_to;
					money[gift_to] += giving_each;
				}
			}
		}

		if (t > 0) // PRESENTATION
			cout << endl;

		for (int i=0; i<n; i++) {
			cout << names[i] << " " << money[names[i]] << endl;
		}

		++t;

		names.clear();
		money.clear();
	}

	return 0;
}
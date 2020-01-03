// Sphere Online Judge (SPOJ) - ANAGR
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

string missing_string;
map<char, int> occ;

void getUnusedCharacters(string s1, string s2, int n, int m) {
	int index;
	if (n > m) { // |s1| > |s2|
		index = 0;
		for (int i=0; i<n; i++) {
			if (s1[i] == s2[index]) {
				index++;
			}
			else {
				missing_string += s1[i];
			}
		}
	}
	else { // |s1| < |s2|
		index = 0;
		for (int i=0; i<m; i++) {
			if (s1[index] == s2[i]) {
				index++;
			}
			else {
				missing_string += s2[i];
			}
		}
	}
}

bool isPalindromable(string s, int n) {
	bool found_odd = false;

	for (int i=0; i<n; i++) {
		++occ[s[i]];
	}

	map<char, int>::iterator it;

	for (it=occ.begin(); it != occ.end(); it++) {
		if (it->second % 2 != 0) {
			if (!found_odd) 
				found_odd = true;
			else
				return false;
		}
	}

	return true;
}

string getPalindrome() {
	char extra = '-';
	string palindrome_string = "";
	stack<char> mirror;

	map<char, int>::iterator it;
	for (it=occ.begin(); it != occ.end(); it++) {
		for (int i=0; i < it->second / 2; i++) {
			palindrome_string += it->first;
			mirror.push(it->first);
		}

		if (it->second % 2 != 0) {
			extra = it->first;
		}
	}

	if (extra != '-') palindrome_string += extra;

	while (!mirror.empty()) {
		palindrome_string += mirror.top();
		mirror.pop();
	}

	return palindrome_string;
}

int main() {
	int t;
	string s1, s2;
	string new_s1, new_s2;

	scanf("%d", &t);
	char aux = getchar(); // Gets endline

	while (t--) {
		getline(cin, s1);
		getline(cin, s2);

		new_s1 = "";
		new_s2 = "";

		int n = s1.length();
		int m = s2.length();

		for (int i=0; i<n; i++) {
			if (s1[i] >= 'A' && s1[i] <= 'Z') {
				new_s1 += s1[i] + 32;
			}
			else {
				if (s1[i] >= 'a' && s1[i] <= 'z') {
					new_s1 += s1[i];
				}
			}
		}

		for (int i=0; i<m; i++) {
			if (s2[i] >= 'A' && s2[i] <= 'Z') {
				new_s2 += s2[i] + 32;
			}
			else {
				if (s2[i] >= 'a' && s2[i] <= 'z') {
					new_s2 += s2[i];
				}
			}
		}

		sort(new_s1.begin(), new_s1.end());
		sort(new_s2.begin(), new_s2.end());

		if (new_s1 == new_s2) {
			printf("YES");
		}
		else {
			missing_string = "";
			getUnusedCharacters(new_s1, new_s2, new_s1.length(), new_s2.length());

			if (isPalindromable(missing_string, missing_string.length())) {
				string answer = getPalindrome();

				// Check if both strings are anagrams now, when adding the answer
				if (new_s1.length() > new_s2.length()) 
					new_s2 += answer;
				else
					new_s1 += answer;

				sort(new_s1.begin(), new_s1.end());
				sort(new_s2.begin(), new_s2.end());

				if (new_s1 == new_s2)
					cout << answer;
				else
					printf("NO LUCK");
			}
			else {
				printf("NO LUCK");
			}
		}

		if (t) {
			printf("\n");
		}

		// Reset map
		occ.clear();
	}
}
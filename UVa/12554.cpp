// UVa Online Judge - 12554
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	char birthday_song[] = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
	vector<string> words;
	string member;
	vector<string> people;

	char *token = strtok(birthday_song, " ");
	while (token != NULL) {
		string s(token);
		words.push_back(s);
		token = strtok(NULL, " ");
	}

	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> member;
		people.push_back(member);
	}

	int repeat = 1;
	while (n > words.size() * repeat) {
		++repeat;
	}

	int index = 0;
	int times = 0;
	for (int i=0; times<repeat * words.size(); i=(i+1) % words.size()) {
		cout << people[index] << ": " << words[i] << endl;

		index = (index+1) % n; 
		++times;
	}

	return 0;
}
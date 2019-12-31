// UVa Online Judge - 12250
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	string word, lang;

	while (cin >> word && word != "#") {
		if (word == "HELLO") {
			lang = "ENGLISH";
		}
		else {
			if (word == "HOLA") {
				lang = "SPANISH";
			}
			else {
				if (word == "HALLO") {
					lang = "GERMAN";
				}
				else {
					if (word == "BONJOUR") {
						lang = "FRENCH";
					}
					else {
						if (word == "CIAO") {
							lang = "ITALIAN";
						}
						else {
							if (word == "ZDRAVSTVUJTE") {
								lang = "RUSSIAN";
							}
							else {
								lang = "UNKNOWN";
							}
						}
					}
				}
			}
		}

		cout << "Case " << t << ": " << lang << endl;
		++t;
	}

	return 0;
}
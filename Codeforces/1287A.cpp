// Codeforces - 1287A
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n;
	string line;
 
	scanf("%d", &t); 
 
	while (t--) {
		scanf("%d", &n);
		cin >> line;
 
		int acum_p = 0;
		int max_p = 0;
		bool flag = false;
		for (int i=0; i<n; i++) {
			if (line[i] == 'A') {
				acum_p = 0;
				flag = true;
			}
			else {
				if (flag) {
					++acum_p;
				}
			}
 
			if (acum_p > max_p) {
				max_p = acum_p;
			}
		}
 
		printf("%d\n", max_p);
	}
 
    return 0;
}
// UVa Online Judge - 661
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1, n, m, c;
	int aux;
	vector<int> consumes;
	vector<int> sequence;
	bool on[21];
	bool fuse_blown;

	while (scanf("%d %d %d", &n, &m, &c), n || m || c) {
		for (int i=0; i<n; i++) {
			scanf("%d", &aux);
			consumes.push_back(aux);
		}

		for (int i=0; i<m; i++) {
			scanf("%d", &aux);
			sequence.push_back(aux);
		}

		memset(on, false, sizeof(on));

		fuse_blown = false;
		int total_amperes = 0;
		int max_consumption = 0;
		for (int i=0; i<m; i++) {
			if (on[sequence[i]-1]) {
				on[sequence[i]-1] = false;
				total_amperes -= consumes[sequence[i]-1];
			}
			else {
				on[sequence[i]-1] = true;
				total_amperes += consumes[sequence[i]-1];

				if (total_amperes > c) {
					fuse_blown = true;
					break;
				}

				if (total_amperes > max_consumption)
					max_consumption = total_amperes;
			}
		}

		printf("Sequence %d\n", t);

		if (fuse_blown)
			printf("Fuse was blown.\n\n");
		else {
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n\n", max_consumption);
		}

		++t;
		consumes.clear();
		sequence.clear();
	}

	return 0;
}
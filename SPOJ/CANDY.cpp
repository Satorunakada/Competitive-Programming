// Sphere Online Judge (SPOJ) - CANDY
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, c, each, need, give, total;
	vector<int> candies;

	while (scanf("%d", &n) && n != -1) {
		total = 0;

		for (int i=0; i<n; i++) {
			scanf("%d", &c);
			candies.push_back(c);

			total += c;
		}

		if (total % n == 0) {
			each = total / n;
			need = 0;
			give = 0;

			for (int i=0; i<n; i++) {
				if (candies[i] < each)
					need += each - candies[i];
				else
					give += candies[i] - each;
			}

			if (need == give) 
				printf("%d\n", need);
			else
				printf("-1\n");
		}
		else {
			printf("-1\n");
		}

		candies.clear();
	}

	return 0;
}
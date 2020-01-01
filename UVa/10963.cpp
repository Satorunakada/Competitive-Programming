// UVa Online Judge - 10963
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, w;
	vector< pair <int, int> > gaps;
	int y1, y2;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &w);

		int min_gap = 0x3f3f3f3f; // INF

		for (int i=0; i<w; i++) {
			scanf("%d %d", &y1, &y2);

			if (abs(y2 - y1) < min_gap)
				min_gap = abs(y2 - y1);

			gaps.push_back(make_pair(y1, y2));
		}

		bool closeable = true;

		for (int i=0; i<w; i++) {
			int current_gap = abs(gaps[i].second - gaps[i].first);

			if (current_gap != min_gap) {
				closeable = false;
				break;
			}
		}

		if (closeable)
			printf("yes\n");
		else
			printf("no\n");

		if (t != 0) {
			printf("\n"); // For presentation
		}

		gaps.clear();
	}

	return 0;
}
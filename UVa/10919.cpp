// UVa Online Judge - 10919
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, m;
	int c, r;
	string course;
	set<string> selected_courses;

	while (scanf("%d", &k), k) {
		scanf("%d", &m);

		for (int i=0; i<k; i++) {
			cin >> course;
			selected_courses.insert(course);
		}

		bool graduates = true;
		for (int i=0; i<m; i++) {
			scanf("%d %d", &c, &r);

			int count = 0;
			for (int i=0; i<c; i++) {
				cin >> course;
				if (selected_courses.count(course) != 0)
					++count;
			}

			if (count < r)
				graduates = false;
		}

		if (graduates)
			printf("yes\n");
		else
			printf("no\n");

		selected_courses.clear();
	}

	return 0;
}
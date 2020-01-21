// UVa Online Judge - 10189
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int t = 1, m, n;
char field[101][101];

int move_j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int move_i[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

char countAdjacentMines(int i, int j) {
	int ni, nj;
	int count = 0;

	for (int k=0; k<8; k++) {
		ni = i + move_i[k];
		nj = j + move_j[k];

		if (ni >= 0 && ni < n && nj >= 0 && nj < m)
			if (field[ni][nj] == '*')
				++count;
	}

	return '0' + count;
}

int main() {
	while (scanf("%d %d", &n, &m), n || m) {
		for (int i=0; i<n; i++) {
			scanf("%s", &field[i]);
		}

		if (t > 1)
			printf("\n");

		printf("Field #%d:\n", t);

		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (field[i][j] != '*')
					field[i][j] = countAdjacentMines(i, j);

				printf("%c", field[i][j]);
			}

			printf("\n");
		}

		++t;
	}

	return 0;
}
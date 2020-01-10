// UVa Online Judge - 11586
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, m, f;
  char aux;
  string piece;

  scanf("%d", &t);

  while (t--) {
    m = 0;
    f = 0;

    while (true) {
      cin >> piece;

      for (int i=0; i<2; i++) {
        if (piece[i] == 'M')
          ++m;
        else
          if (piece[i] == 'F')
            ++f;
      }

      aux = getchar();
      if (aux == '\n' || aux == EOF) break;
    }

    if (m > 1 && f > 1 && m == f)
      printf("LOOP\n");
    else
      printf("NO LOOP\n");
  }

  return 0;
}
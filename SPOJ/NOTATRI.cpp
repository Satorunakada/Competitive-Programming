// Sphere Online Judge (SPOJ) - NOTATRI
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, c;
  long long count;
  vector<int> l;

  while (scanf("%d", &n), n) {
    for (int i=0; i<n; i++) {
      scanf("%d", &a);
      l.push_back(a);
    }

    sort(l.begin(), l.end());

    count = 0;
    c = n - 1;
    while (c >= 2) {
      a = 0;
      b = c - 1;

      while (a < b) {
        if (l[c] > l[a] + l[b]) {
          count += b - a;
          ++a;
        }
        else {
          --b;
        }
      }

      --c;
    }

    printf("%lld\n", count);

    l.clear();
  }

  return 0;
}
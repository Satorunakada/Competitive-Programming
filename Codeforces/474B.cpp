// Codeforces - 474B
// Author: Satoru Diaz Nakada (Nakatoru)
#include <bits/stdc++.h>
using namespace std;

int bSearch(long long a[], int n, long long q) {
  int l, r, mid;
  l = 0;
  r = n - 1;

  while (r - l > 1) {
    mid = (l + r) / 2;

    if (q >= a[mid]) {
      l = mid;
    }
    else {
      r = mid;
    }
  }

  if (q == a[l])
    return l;
  else
    return r;
}

int main() {
  int n, m;
  long long a[100002], worms, acum, q;

  scanf("%d", &n);

  acum = 0;
  for (int i=0; i<n; i++) {
    scanf("%lld", &worms);
    a[i] = acum + worms;
    acum += worms;
  }

  scanf("%d", &m);

  for (int i=0; i<m; i++) {
    scanf("%lld", &q);

    if (q <= a[0]) {
      printf("1\n");
    }
    else {
      printf("%d\n", bSearch(a, n, q) + 1);
    }
  }

  return 0;
}
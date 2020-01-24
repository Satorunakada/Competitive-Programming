// Sphere Online Judge (SPOJ) - BSEARCH1
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int bSearch(int v[], int n, int num) {
  int l, r, mid, ans = -1;
  l = 0;
  r = n - 1;

  while (l <= r) {
    mid = (l + r) / 2;

    if (num == v[mid]) {
      r = mid - 1;
      ans = mid;
    }
    else {
      if (num < v[mid]) {
        r = mid - 1;
      }
      else {
        l = mid + 1;
      }
    }
  }

  return ans;
}

int main() {
  int n, q, num;
  int v[100002];

  scanf("%d %d", &n, &q);

  for (int i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }

  while (q--) {
    scanf("%d", &num);
    printf("%d\n", bSearch(v, n, num));
  }

  return 0;
}
// Sphere Online Judge (SPOJ) - EIGHTS
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  long long k;
  long long last_digits[4] = {192, 442, 692, 942};

  scanf("%d", &t);

  while (t--) {
    scanf("%lld", &k);
    printf("%lld\n", (k-1) / 4 * 1000 + last_digits[(k-1) % 4]);
  }

  return 0;
}
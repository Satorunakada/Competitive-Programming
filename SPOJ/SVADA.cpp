// Sphere Online Judge (SPOJ) - SVADA
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

long long coconutCount(vector< pair<long long, long long> > monkeys, int len, long long secs) {
  long long coconuts = 0;
  
  for (int i=0; i<len; i++) {
    if (secs >= monkeys[i].first) {
      ++coconuts;
      coconuts += (secs - monkeys[i].first) / monkeys[i].second;  
    }
  }

  return coconuts;
}

int main() {
  long long time, a, b, c, d;
  vector< pair <long long, long long> > first_type;
  vector< pair <long long, long long> > second_type;
  int n, m;

  scanf("%lld", &time);
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    scanf("%lld %lld", &a, &b);
    first_type.push_back(make_pair(a, b));
  }

  scanf("%d", &m);

  for (int i=0; i<m; i++) {
    scanf("%lld %lld", &c, &d);
    second_type.push_back(make_pair(c, d));
  }

  // Binary Search
  long long low, high, mid, ans;
  long long x, y;

  low = 1;
  high = time;

  ans = -1;
  while (low < high) {
    mid = (low + high) / 2;

    x = coconutCount(first_type, n, mid);
    y = coconutCount(second_type, m, time - mid);

    if (x <= y) {
      low = mid + 1;
      ans = max(mid, ans);
    }
    else {
      high = mid;
    }
  }

  printf("%lld\n", ans);

  return 0;
}
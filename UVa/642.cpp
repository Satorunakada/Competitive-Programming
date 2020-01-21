// UVa Online Judge - 642
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, vector<string>> m;
  string s, sorted_s;
  int n;

  while (cin >> s && s != "XXXXXX") {
    sorted_s = s;

    sort(sorted_s.begin(), sorted_s.end());
    m[sorted_s].push_back(s);
  }

  while (cin >> s && s != "XXXXXX") {
    sorted_s = s;

    sort(sorted_s.begin(), sorted_s.end());
    n = m[sorted_s].size();

    if (n) {
      sort(m[sorted_s].begin(), m[sorted_s].end());
      
      for (int i=0; i<n; i++) {
        cout << m[sorted_s][i] << endl;
      }
    }
    else {
      cout << "NOT A VALID WORD" << endl;
    }

    cout << "******" << endl;
  }

  return 0;
}
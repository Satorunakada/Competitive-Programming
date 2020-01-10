// UVa Online Judge - 11507
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int l;
  string pointing, bend;
  map< string, map<string,string> > m;

  m["+x"]["+y"] = "+y";
  m["+x"]["-y"] = "-y";
  m["+x"]["+z"] = "+z";
  m["+x"]["-z"] = "-z";

  m["-x"]["+y"] = "-y";
  m["-x"]["-y"] = "+y";
  m["-x"]["+z"] = "-z";
  m["-x"]["-z"] = "+z";

  m["+y"]["+y"] = "-x";
  m["+y"]["-y"] = "+x";
  m["+y"]["+z"] = "+y";
  m["+y"]["-z"] = "+y";

  m["-y"]["+y"] = "+x";
  m["-y"]["-y"] = "-x";
  m["-y"]["+z"] = "-y";
  m["-y"]["-z"] = "-y";

  m["+z"]["+y"] = "+z";
  m["+z"]["-y"] = "+z";
  m["+z"]["+z"] = "-x";
  m["+z"]["-z"] = "+x";

  m["-z"]["+y"] = "-z";
  m["-z"]["-y"] = "-z";
  m["-z"]["+z"] = "+x";
  m["-z"]["-z"] = "-x";

  while (scanf("%d", &l), l) {
    pointing = "+x";

    for (int i=0; i<l-1; i++) {
      cin >> bend;
      if (bend == "No") continue;

      pointing = m[pointing][bend];
    } 

    cout << pointing << endl;
  }

  return 0;
}
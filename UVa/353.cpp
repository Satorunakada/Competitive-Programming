// UVa Online Judge - 353
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  int len = s.length();
  if (len == 1) return true;

  int mirror;
  for (int i=0; i<len/2; i++) {
    mirror = len - i - 1;
    if (s[i] != s[mirror])
      return false;
  }

  return true;
}

int main() {
  set<string> palindromes;
  string s, sub;
  int n;

  while (cin >> s) {
    n = s.length();

    for (int i=1; i<=n; i++) { // Substring length
      for (int j=0; j+i<=n; j++) { // Offset starting on the first character
        sub = s.substr(j, i);

        if (isPalindrome(sub))
          palindromes.insert(sub);
      }
    }

    cout << "The string '" << s << "' contains " << palindromes.size() << " palindromes." << endl;
    palindromes.clear();
  }

  return 0;
}
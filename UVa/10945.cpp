// UVa Online Judge - 10945
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int len, mirror;
  bool palindrome;

  while (getline(cin, s), s != "DONE") {
    len = s.length();

    string new_string = "";
    for (int i=0; i<len; i++) {
      if (s[i] >= 'A' && s[i] <= 'Z')
        new_string += s[i] + 32;
      else 
        if (s[i] >= 'a' && s[i] <= 'z')
          new_string += s[i];
    }

    len = new_string.length();
    palindrome = true;
    for (int i=0; i<len/2; i++) {
      mirror = len - i - 1;

      if (new_string[i] != new_string[mirror])
        palindrome = false;
    }

    if (palindrome)
      printf("You won't be eaten!\n");
    else
      printf("Uh oh..\n");
  }

  return 0;
}
// UVa Online Judge - 401
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, char> mirror;
  char s[25];
  int t, n, j, middle;
  bool palindrome, mirrored;

  mirror['A'] = 'A'; mirror['E'] = '3';
  mirror['H'] = 'H'; mirror['I'] = 'I';
  mirror['J'] = 'L'; mirror['L'] = 'J';
  mirror['M'] = 'M'; mirror['O'] = 'O';
  mirror['S'] = '2'; mirror['T'] = 'T';
  mirror['U'] = 'U'; mirror['V'] = 'V';
  mirror['W'] = 'W'; mirror['X'] = 'X';
  mirror['Y'] = 'Y'; mirror['Z'] = '5';
  mirror['1'] = '1'; mirror['2'] = 'S';
  mirror['3'] = 'E'; mirror['5'] = 'Z';
  mirror['8'] = '8';

  t = 0;
  while (scanf("%s", s) != EOF) {
    n = strlen(s);

    palindrome = true;
    mirrored = true;

    j = 0;
    for (int i=0; i<n/2; i++) {
      j = n - i - 1;

      if (s[i] != s[j])
        palindrome = false;

      if (!mirror.count(s[i]) || !mirror.count(s[j]))
        mirrored = false;

      if (s[i] != mirror[s[j]])
        mirrored = false;
    }

    if (n % 2 != 0) { // Check element in middle
      middle = n / 2;

      if (!mirror.count(s[middle]))
        mirrored = false;

      if (s[middle] != mirror[s[middle]])
        mirrored = false;
    }

    if (palindrome)
      if (mirrored)
        printf("%s -- is a mirrored palindrome.", s);
      else
        printf("%s -- is a regular palindrome.", s);
    else
      if (mirrored)
        printf("%s -- is a mirrored string.", s);
      else
        printf("%s -- is not a palindrome.", s);

    printf("\n\n");
  }

  return 0;
}
// UVa Online Judge - 10082
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, char> m;
  string input, output;
  int len;

  m['1'] = '`'; m['2'] = '1';
  m['3'] = '2'; m['4'] = '3';
  m['5'] = '4'; m['6'] = '5';
  m['7'] = '6'; m['8'] = '7';
  m['9'] = '8'; m['0'] = '9';
  m['-'] = '0'; m['='] = '-';

  m['W'] = 'Q'; m['E'] = 'W';
  m['R'] = 'E'; m['T'] = 'R';
  m['Y'] = 'T'; m['U'] = 'Y';
  m['I'] = 'U'; m['O'] = 'I';
  m['P'] = 'O'; m['['] = 'P';
  m[']'] = '['; m['\\'] = ']';

  m['S'] = 'A'; m['D'] = 'S';
  m['F'] = 'D'; m['G'] = 'F';
  m['H'] = 'G'; m['J'] = 'H';
  m['K'] = 'J'; m['L'] = 'K';
  m[';'] = 'L'; m['\''] = ';';
  m[']'] = '['; m['\\'] = ']';

  m['X'] = 'Z'; m['C'] = 'X';
  m['V'] = 'C'; m['B'] = 'V';
  m['N'] = 'B'; m['M'] = 'N';
  m[','] = 'M'; m['.'] = ',';
  m['/'] = '.'; m[' '] = ' ';

  while (getline(cin, input)) {
    len = input.length();
    output = "";

    for (int i=0; i<len; i++) 
      output += m[input[i]];

    cout << output << endl;
  }

  return 0;
}
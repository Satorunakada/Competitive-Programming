// UVa Online Judge - 11956
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, n, memory[100], pointer;
  string inst;

  scanf("%d", &T);

  for (int t=1; t<=T; t++) {
    cin >> inst;
    n = inst.length();

    memset(memory, 0, sizeof(memory));
    pointer = 0;
    for (int i=0; i<n; i++) {
      if (inst[i] == '.') continue;

      if (inst[i] == '+') {
        ++memory[pointer];

        if (memory[pointer] == 256)
          memory[pointer] = 0;
      }
      else {
        if (inst[i] == '-') {
          --memory[pointer];

          if (memory[pointer] == -1)
            memory[pointer] = 255;
        }
        else {
          if (inst[i] == '>') {
            ++pointer;

            if (pointer == 100) {
              pointer = 0;
            }
          }
          else {
            if (inst[i] == '<') {
              --pointer;

              if (pointer == -1)
                pointer = 99;
            }
          }
        }
      }
    }

    printf("Case %d:", t);
    for (int i=0; i<100; i++) {
      printf(" %02X", memory[i]);
    }
    printf("\n");
  }

  return 0;
}
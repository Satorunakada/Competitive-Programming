// UVa Online Judge - 162
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
  string card;
  int turn;
  deque<char> player[2], deck;
  map<char,int> face_cards;
  bool special;
  int face_remaining, last_face;

  face_cards['J'] = 1;
  face_cards['Q'] = 2;
  face_cards['K'] = 3;
  face_cards['A'] = 4;

  while (cin >> card && card != "#") {
    // 0 is the non-dealer
    // 1 is the dealer
    player[0].push_front(card[1]);
    for (int i=1; i<=51; i++) {
      cin >> card;

      player[i % 2].push_front(card[1]);
    }

    turn = 0;
    face_remaining = 0;
    while (true) {
      if ( player[turn].empty() )
        break;

      deck.push_front(player[turn].front());
      player[turn].pop_front();

      if (face_cards[deck.front()]) {
        face_remaining = face_cards[deck.front()] + 1;
        last_face = turn;
        turn = (turn + 1) % 2;
      }

      if (face_remaining) {
        --face_remaining;

        if (face_remaining == 0) {
          while(!deck.empty()) {
            player[last_face].push_back(deck.back());
            deck.pop_back();
          }

          turn = last_face;
        }
      }
      else {
        turn = (turn + 1) % 2;
      }
    }

    if (player[0].empty()) // Non-dealer loses
      printf("%d%3d\n", 1, (int)player[1].size());
    else // Non-dealer wins
      printf("%d%3d\n", 2, (int)player[0].size());

    player[0].clear();
    player[1].clear();
    deck.clear();
  }

  return 0;
}
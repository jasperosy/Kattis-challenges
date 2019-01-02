#include <iostream>
using namespace std;

int main() {
  int flag = 1;
  int first, second, third, fourth;
  int numberone, numbertwo;
  int playerone, playertwo;
  while (flag != 0) {
    cin >> first;
    cin >> second;
    if (first == 0) {
      break;
    }
    if (first != second) {
      if (first < second) {
        numberone = second * 10 + first;
        if (numberone == 21) {
          playerone = 3;
        }
        else {
          playerone = 1;
        }
      }
      else {
        numberone = first * 10 + second;
        if (numberone == 21) {
          playerone = 3;
        }
        else {
          playerone = 1;
        }

      }
    }
    else {
      playerone = 2;
      numberone = first * 10 + second;
    }
    cin >> third;
    cin >> fourth;
    if (third != fourth) {
      if (third > fourth) {
        numbertwo = third * 10 + fourth;
        if (numbertwo == 21) {
          playertwo = 3;
        }
        else {
          playertwo = 1;
        }
      }
      else {
        numbertwo = fourth * 10 + third;
        if (numbertwo == 21) {
          playertwo = 3;
        }
        else {
          playertwo = 1;
        }

      }
    }
    else {
      playertwo = 2;
      numbertwo = third * 10 + fourth;
    }
    if (playerone > playertwo) {
      cout << "Player 1 wins." << endl;
      continue;
    }
    else if (playertwo > playerone) {
      cout << "Player 2 wins." << endl;
      continue;
    }
    else if (playerone == playertwo) {
      if (numberone > numbertwo) {
        cout << "Player 1 wins." << endl;
        continue; 
      }
      else if (numbertwo > numberone) {
        cout << "Player 2 wins." << endl;
        continue;
      }
      else {
        cout << "Tie." << endl;
        continue;
      }
    }
  }    
}

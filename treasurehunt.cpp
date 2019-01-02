#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row;
  cin >> col;
  char arr[row][col];
  int count[row][col];
  char current;
  int flag = 1;
  int r = 0, c = 0;
  int counter = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
      count[i][j] = 0;
    }
  }
  while (flag != 0) {
    current = arr[r][c];
    if (current == 'T') {
      cout << counter << endl;
      break;
    }
    else if (current == 'N') {
      if (r - 1 < 0) {
        cout << "out" << endl;
        break;
      }
      else {
        r -= 1;
        count[r][c] += 1;
        counter += 1;
        if (count[r][c] == 2) {
          cout << "Lost" << endl;
          break;
        }
      }
    }
    else if (current == 'S') {
      if (r + 1 >= row) {
        cout << "out" << endl;
        break;
      }
      else {
        r += 1;
        count[r][c] += 1;
        counter += 1;
        if (count[r][c] == 2) {
          cout << "Lost" << endl;
          break;
        }
      }
    }
    else if (current == 'E') {
      if (c + 1 >= col) {
        cout << "out" << endl;
        break;
      }
      else {
        c += 1;
        count[r][c] += 1;
        counter += 1;
        if (count[r][c] == 2) {
          cout << "Lost" << endl;
          break;
        }
      }
    }
    else if (current == 'W') {
      if (c - 1 < 0) {
        cout << "out" << endl;
        break;
      }
      else {
        c -= 1;
        count[r][c] += 1;
        counter += 1;
        if (count[r][c] == 2) {
          cout << "Lost" << endl;
          break;
        }
      }
    }    
  }
  return 0;
}

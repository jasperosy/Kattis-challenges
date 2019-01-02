#include <iostream>
using namespace std;

int main() {
  int left, right;
  cin >> left;
  cin >> right;
  if (left > right) {
    cout << "Odd " << 2 * left << endl;
  }
  else if (right > left) {
    cout << "Odd " << 2 * right << endl;
  }
  else if ((right == left) && ((left != 0) || (right != 0))) {
    cout << "Even " << left + right << endl;
  }
  else {
    cout << "Not a moose" << endl;
  }
}

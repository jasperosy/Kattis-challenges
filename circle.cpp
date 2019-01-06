#include <iostream>
#include <cmath>
using namespace std;

char draw_circle(long);
double distance(long, long, long);

int main()
{
  long r;
  cin >> r;
  draw_circle(r);
  return 0;
}

double distance(long i, long j, long r) {
  
  double fraction = 0;

  fraction = (sqrt((pow((r - j), 2) + pow((r - i), 2))) - r);
  
  if (fraction < 0) {
    return -fraction;
  }
  else {
    return fraction;
  }
}

char draw_circle(long r) {
  
  long i;
  long j;

  for (j = 0; j <= (2 * r); j += 1) {
    for (i = 0; i <= (2 * r); i += 1) {
      if (distance(i, j, r) < 0.1) {
        if (i < (2 * r)) {
          cout << "@";
        }
        else {
          cout << "@" << endl;
        }
      }
      else if (distance(i, j, r) < 0.3) {
        if (i < (2 * r)) {
          cout << "O";
        }
        else {
          cout << "O" << endl;
        }
      }
      else if (distance(i, j, r) < 0.5) {
        if (i < (2 * r)) {
          cout << "*";
        }
        else {
          cout << "*" << endl;
        }
      }
      else if (distance(i, j, r) < 0.7) {
        if (i < (2 * r)) {
          cout << "+";
        }
        else {
          cout << "+";
        }
      }
      else {
        if (i < (2 * r)) {
          cout << " ";
        }
        else {
          cout << " " << endl;
        }
      }
    }
  }
  return 0;
}

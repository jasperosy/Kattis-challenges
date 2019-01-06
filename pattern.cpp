#include <iostream>
#include <cmath>
#include <cstdbool>

using namespace std;

char parallax(long, long);
bool is_prime(long);
long get_leading_entry(long, long);

int main()
{

  long n;
  cin >> n;
  long h;
  cin >> h;
  
  parallax(n, h);
  
  return 0;
}
long get_leading_entry(long i, long n) {
  
  long m;
  long entry = 1;

  for (m = 1; m <= i; m += 1) {
    entry += ((m - 1) * n);
  }
  return entry;
}

bool is_prime(long num) {
  
  long i;
    
  for (i = 2; i * i <= num; i += 1) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

char parallax(long n, long h) {
  
  long i;
  long j;
  long k;
  long leading_entry = 0;
  long num = 0;
  
  //for loop for each respective row
  for (i = 1; i <= h; i += 1) {
    //getting the leading entry for each row
    leading_entry = get_leading_entry(i, n);
    //have to assign a reference for the leading entry as the leading entry is being manipulated in the later for loops
    num = leading_entry;
    //printing the empty spaces
    for (j = i; j < h; j += 1) {
      cout << " ";
    }
    //the leading entry for row 1 is a special case that cant really fit into the AP
    if (i == 1) {
      leading_entry = 1;
    }
    //loops responsible for printing the hax for prime numbers
    for (j = 1; j <= ((2 * i) - 1); j += 1) {
      for (k = 1; k <= n; k += 1) {
        if ((leading_entry == 1) || (is_prime(leading_entry) == true)) {
          cout << "#";
          leading_entry = num + j;
          break;
        }
        else if (k < n) {
          leading_entry += i;
        }
        else {
          cout << " ";
          leading_entry = num + j;
        }
      }
    }
    for (j = i; j < h; j += 1) {
      cout << " ";
    }
    cout << "" << endl;
  }
  return 0;
}

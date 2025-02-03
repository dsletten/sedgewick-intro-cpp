/*
 *
 *   File:
 *      divides.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      250202  Original.
 *
 */

#include <iostream>
#include <string>

using namespace std;

bool canDivide(int m, int n) {
  return m % n == 0  ||  n % m == 0;
}

bool isValid(int n) {
  return n > 0;
}

int main(int argc, char* argv[]) {
  if (argc == 3) {
    int m = stoi(argv[1]);
    int n = stoi(argv[2]);

    if (isValid(m) && isValid(n)) {
      cerr << (canDivide(m, n) ? "True" : "False") << endl;
    } else {
      cout << "Corrupt" << endl;
      return 1;
    }
  }

  return 0;
}

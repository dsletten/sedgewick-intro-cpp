/*
 *
 *   File:
 *      intops.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      250116  Original.
 *
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char* argv[]) {
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int quotient = a / b;
  int remainder = a % b;
  long power = pow(a, b);
  
  cout << a << " + " << b << " = " << sum << endl;
  cout << a << " - " << b << " = " << difference << endl;
  cout << a << " * " << b << " = " << product << endl;
  cout << a << " / " << b << " = " << quotient << endl;
  cout << a << " % " << b << " = " << remainder << endl;
  cout << a << " ** " << b << " = " << power << endl;
  
  return 0;
}

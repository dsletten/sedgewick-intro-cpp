/*
 *
 *   File:
 *      floatops.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      250119  Original.
 *
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char* argv[]) {
  double a = stod(argv[1]);
  double b = stod(argv[2]);

  double sum = a + b;
  double difference = a - b;
  double product = a * b;
  double quotient = a / b;
  //  double remainder = a % b;
  double power = pow(a, b);
  
  cout << a << " + " << b << " = " << sum << endl;
  cout << a << " - " << b << " = " << difference << endl;
  cout << a << " * " << b << " = " << product << endl;
  cout << a << " / " << b << " = " << quotient << endl;
  //  cout << a << " % " << b << " = " << remainder << endl;
  cout << a << " ** " << b << " = " << power << endl;
  
  return 0;
}

/*
 *
 *   File:
 *      quadratic_sedgewick.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      250121  Original.
 *
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void quadratic(double b, double c, double* root1, double* root2) {
  double discriminant = b * b - 4 * c;
  double d = sqrt(discriminant);

  *root1 = (-b + d) / 2;
  *root2 = (-b - d) / 2;
}

int main(int argc, char* argv[]) {
  double b = stod(argv[1]);
  double c = stod(argv[2]);

  // double* root1;
  // double* root2;
  double root1;
  double root2;

  //  quadratic(b, c, root1, root2);
  quadratic(b, c, &root1, &root2);

  // cout << "Root 1: " << *root1 << endl;
  // cout << "Root 2: " << *root2 << endl;
  cout << "Root 1: " << root1 << endl;
  cout << "Root 2: " << root2 << endl;

  return 0;
}

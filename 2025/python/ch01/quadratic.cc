/*
 *
 *   File:
 *      quadratic.cc
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

void quadratic(double a, double b, double c, double* root1, double* root2) {
  double discriminant = b * b - 4 * a * c;
  double d = sqrt(discriminant);

  *root1 = (-b + d) / 2 / a;
  *root2 = (-b - d) / 2 / a;
}

//    Goldberg -- What Every Computer Scientist Should Know... pg. 162
void goldbergQuadratic(double a, double b, double c, double* root1, double* root2) {
  double discriminant = b * b - 4 * a * c;
  double d = sqrt(discriminant);

  if (b >= 0) {
    *root1 = (2 * c) / (-b - d);
    *root2 = (-b - d) / (2 * a);
  } else {
    *root1 = (-b + d) / (2 * a);
    *root2 = (2 * c) / (-b + d);
  }
}

int main(int argc, char* argv[]) {
  if (argc == 4) {
    double a = stod(argv[1]);
    double b = stod(argv[2]);
    double c = stod(argv[3]);

    double root1;
    double root2;

    //    quadratic(a, b, c, &root1, &root2);
    goldbergQuadratic(a, b, c, &root1, &root2);

    cout << "Root 1: " << root1 << endl;
    cout << "Root 2: " << root2 << endl;

    return 0;
  }
}

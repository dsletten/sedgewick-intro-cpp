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
 *      130326  Original.
 *
 */
#include <iostream>
#include <vector>
#include <complex>

std::vector<std::complex<double> > quadratic(double b, double c) {
  double discriminant = b*b - 4*c;
  double realTerm = -b/2;
  std::vector<std::complex<double> > result;

  if ( discriminant == 0 ) {
    std::complex<double> r(realTerm, 0);
    result.push_back(r);
    result.push_back(r);
  } else if ( discriminant > 0 ) {
    double d = sqrt(discriminant);
    std::complex<double> r1(realTerm + d/2, 0);
    std::complex<double> r2(realTerm - d/2, 0);
    result.push_back(r1);
    result.push_back(r2);
  } else {
    double d = sqrt(-discriminant);
    std::complex<double> r1(realTerm, d/2);
    std::complex<double> r2(realTerm, -d/2);
    result.push_back(r1);
    result.push_back(r2);
  }

  return result;
}

int main() {
  std::vector<std::complex<double> > result;

  result = quadratic(-6, 9);
  std::cout << result[0] << " and " << result[1] << std::endl;
  result = quadratic(-3, 2);
  std::cout << result[0] << " and " << result[1] << std::endl;
  result = quadratic(-1, -1);
  std::cout << result[0] << " and " << result[1] << std::endl;
  result = quadratic(1, 1);
  std::cout << result[0] << " and " << result[1] << std::endl;
  
  return 0;
}

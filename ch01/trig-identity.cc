/*
 *
 *   File:
 *      trig-identity.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      130329  Original.
 *
 */
#include <iostream>
#include <cmath>
#include <cstdio>

double square(double x) {
  return x * x;
}

double sumSquares(double x, double y) {
  return square(x) + square(y);
}

int main() {
  for (double theta = 0; theta <= M_PI; theta += 0.01) {
    std::cout << theta << ": " << sumSquares(cos(theta), sin(theta)) << std::endl;
    printf("%.16f: %.16f\n", theta, sumSquares(cos(theta), sin(theta)));
  }
  
  return 0;
}

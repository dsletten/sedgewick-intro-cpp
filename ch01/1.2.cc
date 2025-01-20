/*
 *
 *   File:
 *      1.2.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      130407  Original.
 *
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

bool divides(int m, int n) {
  if ( m <= 0  ||  n <= 0 ) {
    return false;
  } else {
    return m % n == 0  ||  n % m == 0;
  }
}

void printDivides(int m, int n) {
  std::cout << m << " divides " << n << ": " << (divides(m, n) ? "true" : "false") << std::endl;
}

bool triangle(int a, int b, int c) {
  if ( a <= 0  ||  b <= 0  ||  c <= 0 ) {
    return false;
  } else {
    return a + b > c  &&  a + c > b  &&  b + c > a;
  }
}

void printTriangle(int a, int b, int c) {
  std::cout << a << ", " << b << ", and " << c << (triangle(a, b, c) ? "" : " don't") << " define a triangle." << std::endl;
}

double distance(double x, double y) {
  return sqrt(x*x + y*y);
}

int randomInt(int a, int b) {
  if ( a == b ) {
    return a;
  } else if ( b < a ) {
    return randomInt(b, a);
  } else {
    return rand() % (b - a + 1) + a;
  }
}

int rollDie() {
  return randomInt(1, 6);
}

int rollDice() {
  return rollDie() + rollDie();
}

int main() {
  printDivides(3, 12);
  printDivides(60, 5);
  printDivides(-3, 9);
  printDivides(3, 0);
  printDivides(0, 4);
  printDivides(3, 11);

  printTriangle(3, 4, 5);
  printTriangle(5, 12, 13);
  printTriangle(2, 1, 2);
  printTriangle(1, 2, 3);
  printTriangle(0, 0, 0);
  printTriangle(-3, -4, -5);

  std::cout << distance(3.0, 4.0) << std::endl;
  std::cout << distance(5.0, 12.0) << std::endl;
  std::cout << distance(1.0, 1.0) << std::endl;

  srand(static_cast<unsigned int>(time(0)));

  for (int i = 0; i < 10; i++) {
    std::cout << randomInt(3, 8) << std::endl;
  }
  
  return 0;
}

/*
 *
 *   File:
 *      leap-year.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      130327  Original.
 *
 */
#include <iostream>

bool isLeapYear(unsigned int year) {
  return (year % 4 == 0  &&  year % 100 != 0)  ||  year % 400 == 0;
}

void printLeapYear(unsigned int year) {
  std::cout << year << ": " << (isLeapYear(year) ? "true" : "false") << std::endl;
}
  
int main() {
  printLeapYear(1999);
  printLeapYear(2000);
  printLeapYear(2100);
  printLeapYear(2012);

  return 0;
}

/*
 *
 *   File:
 *      use_three.cc
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      250107  Original.
 *
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//string commifyList(vector<string> elts) {
string commifyList(const vector<string>& elts) {
  if (elts.empty()) {
    return "";
  } else if (elts.size() == 1) {
    return elts[0];
  } else if (elts.size() == 2) {
    return elts[0] + " and " + elts[1];
  } else {
    string result;
    for (vector<string>::size_type i = 0; i < elts.size()-1; i++) {
      result += elts[i] + ", ";
    }

    result += "and " + elts.back();
    return result;
  }
}

int main(int argc, const char* argv[]) {
  if (argc == 1) {
    cout << "Nothing to see here." << endl;
  } else {
    vector<string> args;

    for (int i = 1; i < argc; i++) {
      args.push_back(string(argv[i]));
    }

    reverse(args.begin(), args.end());
    
    cout << "Hi " << commifyList(args) << "." << endl;
  }
  
  return 0;
}

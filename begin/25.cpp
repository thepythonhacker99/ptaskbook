// Given an independent variable x, find the value of a function
// y = 3x6 − 6x2 − 7

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Given an independent variable x, find the value of a function "
               "y = 3x6 − 6x2 − 7"
            << std::endl
            << std::endl;

  // get x
  int x;

  std::cout << "x: ";
  std::cin >> x;

  // calculate
  long long y = (3 * std::pow(x, 6)) - (6 * std::pow(x, 2)) - 7;

  // display the answers
  std::cout << std::endl;

  std::cout << "y: " << y << std::endl;

  return 0;
}

// Given an independent variable x, find the value of a function
// y = 4(x−3)6 − 7(x−3)3 + 2

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Given an independent variable x, find the value of a function "
               "y = 4(x−3)6 − 7(x−3)3 + 2"
            << std::endl
            << std::endl;

  // get x
  int x;

  std::cout << "x: ";
  std::cin >> x;

  // calculate
  long long y = 4 * std::pow(x - 3, 6) - 7 * std::pow(x - 3, 3) + 2;

  // display the answers
  std::cout << std::endl;

  std::cout << "y: " << y << std::endl;

  return 0;
}

// A distance L is given in centimeters. Find the amount 
// of full meters of this distance (1 m = 100 cm). Use 
// the operator of integer division.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "A distance L is given in centimeters. "
            << "Find the amount of full meters of "
            << "this distance (1 m = 100 cm). Use "
            << "the operator of integer division."
            << std::endl
            << std::endl;

  int l;

  std::cout << "l (length): ";
  std::cin >> l;

  // calculate
  int meters = l / 100;

  // display the answers
  std::cout << std::endl;
  std::cout << "Nr. of full meters in `L`: " << meters << "m" << std::endl;

  return 0;
}

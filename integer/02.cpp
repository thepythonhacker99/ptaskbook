// A weight M is given in kilograms. Find the amount 
// of full tons of this weight (1 ton = 1000 kg). 
// Use the operator of integer division.

#include <cmath>
#include <iostream>

int main() {
  std::cout << " A weight M is given in kilograms. "
            << "Find the amount of full tons of "
            << "this weight (1 ton = 1000 kg). "
            << "Use the operator of integer "
            << "division."
            << std::endl
            << std::endl;

  int m;

  std::cout << "M (weight in kg): ";
  std::cin >> m;

  // calculate
  int tons = m / 1000;

  // display the answers
  std::cout << std::endl;
  std::cout << "Nr. of full tons in `l`: " << tons << "ton" << std::endl;

  return 0;
}

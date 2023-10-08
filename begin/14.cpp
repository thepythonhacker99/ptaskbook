// Given the length L of a circumference, find the radius R and the area S of
// the circle. Take into account that
// L = 2·π·R
// S = π·R2
// Use 3.14 for a value of π.

#include <cmath>
#include <iostream>

constexpr float PI = 3.14;

int main() {
  std::cout << "Given the length L of a circumference, find the radius R and "
               "the area S of the circle."
            << std::endl
            << std::endl;

  // get L
  int L;

  std::cout << "L: ";
  std::cin >> L;

  // calculate
  float R = L / (2.f * PI);
  float S = PI * std::pow(R, 2);

  // display the answers
  std::cout << std::endl;

  std::cout << "Radius: " << R << std::endl;
  std::cout << "Area: " << S << std::endl;

  return 0;
}

// Given the radius R of a circle, find the length L of the circumference and
// the area S of the circle:
// L = 2·π·R
// S = π·R2
// Use 3.14 for a value of π

#include <cmath>
#include <iostream>

constexpr float PI = 3.14;

int main() {
  std::cout << "Given the radius R of a circle, find the length L of the "
               "circumference and the area S of the circle:"
            << "L = 2·π·R"
            << "S = π·R2"
            << "Use 3.14 for a value of π" << std::endl
            << std::endl;

  // get R
  int R;

  std::cout << "R: ";
  std::cin >> R;

  // calculate
  int L = 2 * PI * R;
  int S = PI * std::pow(R, 2);

  // display the answer
  std::cout << std::endl;

  std::cout << "Length: " << L << std::endl;
  std::cout << "Area: " << S << std::endl;

  return 0;
}

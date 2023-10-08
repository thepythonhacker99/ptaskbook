// Given the area S of a circle, find the diameter D and the length L of the
// circumference. Take into account that:
// L = π·D
// S = π·D2/4.
// Use 3.14 for a value of π.

#include <cmath>
#include <iostream>

constexpr float PI = 3.14;

int main() {
  std::cout << "Given the area S of a circle, find the diameter D and the "
               "length L of the circumference."
            << std::endl
            << std::endl;

  // get S
  int S;

  std::cout << "S: ";
  std::cin >> S;

  // calculate
  float D = std::sqrt((4 * S) / PI);
  float L = PI * D;

  // display the answers
  std::cout << std::endl;

  std::cout << "Diameter: " << D << std::endl;
  std::cout << "Length: " << L << std::endl;

  return 0;
}

// Given the diameter d of a circle, find the length L of the circle: L = π·d.
// Use 3.14 for a value of π

#include <iostream>

constexpr float PI = 3.14;

int main() {
  std::cout << "Given the diameter d of a circle, find the length L of the "
               "circle: L = π·d. Use 3.14 for a value of π"
            << std::endl
            << std::endl;

  // get d
  int d;

  std::cout << "d: ";
  std::cin >> d;

  // calculate
  float L = PI * d;

  // display the answer
  std::cout << std::endl;

  std::cout << "Length: " << L << std::endl;

  return 0;
}

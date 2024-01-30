// The angle value α in radians (0 ≤ α < 2·π) is given.
// Convert this value into degrees. Take into account that 180° = π radians.
// Use 3.14 for a value of π.

#include <cmath>
#include <iostream>

constexpr float PI = 3.14;

void assert(bool expression, const std::string &message) {
  if (!expression) {
    std::cout << message << std::endl;
    exit(1);
  }
}

int main() {
  std::cout << "The angle value α in radians (0 ≤ α < 2·π) is given. "
            << "Convert this value into degrees. Take into "
            << "account that 180° = π radians. "
            << "Use 3.14 for a value of π."
            << std::endl
            << std::endl;

  // get a
  float a;

  std::cout << "a: ";
  std::cin >> a;

  assert(0 <= a && a < 2 * PI, "a must be (0 ≤ α < 2π)");

  // calculate
  float radians = a * (PI / 180.f);

  // display the answers
  std::cout << std::endl;

  std::cout << "radians: " << radians << std::endl;

  return 0;
}

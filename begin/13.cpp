// Given the radiuses R1 and R2 of two concentric circles (R1 > R2), find the
// areas S1 and S2 of the circles and the area S3 of the ring bounded by the
// circles:
// S1 = π·(R1)2
// S2 = π·(R2)2
// S3 = S1 − S2.
// Use 3.14 for a value of π.

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

constexpr float PI = 3.14;

void assert(bool expression, const std::string &message) {
  if (!expression) {
    std::cout << message << std::endl;
    exit(1);
  }
}

int main() {
  std::cout << "Given the radiuses R1 and R2 of two concentric circles (R1 > "
               "R2), find the areas S1 and S2 of the circles and the area S3 "
               "of the ring bounded by the circles"
            << std::endl
            << std::endl;

  // get R1
  int R1;

  std::cout << "R1: ";
  std::cin >> R1;

  // get R2
  int R2;

  std::cout << "R2: ";
  std::cin >> R2;

  assert(R1 > R2, "R1 must be greater than R2!");

  // calculate
  float S1 = PI * std::pow(R1, 2);
  float S2 = PI * std::pow(R2, 2);

  float S3 = S1 - S2;

  // display the answer
  std::cout << std::endl;

  std::cout << "S1: " << S1 << std::endl;
  std::cout << "S2: " << S2 << std::endl;
  std::cout << "S3: " << S3 << std::endl;

  return 0;
}

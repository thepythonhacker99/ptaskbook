// Given two nonnegative numbers a and b, find their geometrical mean (a square
// root of their product): (a·b)1/2

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>

void checkNonNegative(int v, const std::string &message) {
  if (v < 0) {
    std::cout << message << "\n";
    exit(1);
  }
}

int main() {
  std::cout << "Given two nonnegative numbers a and b, find their geometrical "
               "mean (a square root of their product): (a·b)1/2"
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  checkNonNegative(a, "`a` must be nonnegative");

  // get b
  int b;

  std::cout << "b: ";
  std::cin >> b;

  checkNonNegative(b, "`b` must be nonnegative");

  // calculate
  float mean = std::sqrt(a * b);

  // display the answer
  std::cout << std::endl;

  std::cout << "Geometrical mean: " << mean << std::endl;
  return 0;
}

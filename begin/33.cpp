// X kg of sweet cost A euro. Find the cost of 1 kg and 
// Y kg of the sweets (positive numbers X, A, Y are given).

#include <cmath>
#include <iostream>

void assert(bool expression, const std::string &message) {
  if (!expression) {
    std::cout << message << std::endl;
    exit(1);
  }
}

int main() {
  std::cout << "X kg of sweet cost A euro. Find the cost "
            << "of 1 kg and Y kg of the sweets (positive "
            << "numbers X, A, Y are given)."
            << std::endl
            << std::endl;

  // get X
  float x;

  std::cout << "x (nr. of kg): ";
  std::cin >> x;

  assert(x >= 0, "`x` must be positive");

  // get A
  float a;

  std::cout << "a (cost of " << x << "kg): ";
  std::cin >> a;

  assert(x >= 0, "`a` must be positive");

  // get Y
  float y;

  std::cout << "y (nr. of kg to find): ";
  std::cin >> y;

  assert(x >= 0, "`y` must be positive");

  // calculate
  float kg1 = a / x;
  float kgY = kg1 * y;

  // display the answers
  std::cout << std::endl;

  std::cout << "Cost of 1kg: " << kg1 << " euro" << std::endl;
  std::cout << "Cost of " << y << "kg: " << kgY << " euro" << std::endl;

  return 0;
}

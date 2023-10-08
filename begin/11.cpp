// Two nonzero numbers are given. Find the sum, the difference, the product, and
// the quotient of their absolute values.

#include <cmath>
#include <cstdlib>
#include <iostream>

void checkNonZero(int v, const std::string &message) {
  if (v == 0) {
    std::cout << message << std::endl;
    exit(1);
  }
}

int main() {
  std::cout << "Two nonzero numbers are given. Find the sum, the difference, "
               "the product, and the quotient of their absolute values"
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  checkNonZero(a, "`a` must be a nonzero value");

  // get b
  int b;

  std::cout << "b: ";
  std::cin >> b;

  checkNonZero(b, "`b` must be a nonzero value");

  // calculate
  int aAbs = std::abs(a);
  int bAbs = std::abs(b);

  int sum = a + bAbs;
  int diff = aAbs - bAbs;
  int product = aAbs * bAbs;
  float quotient = static_cast<float>(aAbs) / static_cast<float>(bAbs);

  // display the answer
  std::cout << std::endl;

  std::cout << "`a` squared: " << aAbs << std::endl;
  std::cout << "`b` squared: " << bAbs << std::endl;

  std::cout << std::endl;

  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << diff << std::endl;
  std::cout << "Product: " << product << std::endl;
  std::cout << "Quotient: " << quotient << std::endl;

  return 0;
}

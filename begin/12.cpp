// The legs a and b of a right triangle are given. Find the hypotenuse c and the
// perimeter P of the triangle:
// c = (a2 + b2)1/2
// P = a + b + c.

#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
  std::cout << "The legs a and b of a right triangle are given. Find the "
               "hypotenuse c and the perimeter P of the triangle."
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // get b
  int b;

  std::cout << "b: ";
  std::cin >> b;

  // calculate
  float c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
  float P = a + b + c;

  // display the answer
  std::cout << std::endl;

  std::cout << "Hypotenuse: " << c << std::endl;
  std::cout << "Perimeter: " << P << std::endl;

  return 0;
}

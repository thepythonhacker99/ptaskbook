// The sides a and b of a rectangle are given. Find the area S = a·b and the
// perimeter P = 2·(a + b) of the rectangle

#include <iostream>

int main() {
  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // get b
  int b;

  std::cout << "b: ";
  std::cin >> b;

  // calculate
  int S = a * b;
  int P = 2 * (a + b);

  // display the answer
  std::cout << "Area: " << S << std::endl;
  std::cout << "Perimeter: " << P << std::endl;

  return 0;
}

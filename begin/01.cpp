// Given the side a of a square, find the perimeter P of the square: P = 4·a

#include <iostream>

int main() {
  int a;

  std::cout << "a: ";
  std::cin >> a;

  int P = 4 * a;
  std::cout << "Perimeter: " << P << std::endl;

  return 0;
}

// Given the side a of a square, find the perimeter P of the square: P = 4·a

#include <iostream>

int main() {
  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  int P = 4 * a;

  // display the answers
  std::cout << "Perimeter: " << P << std::endl;

  return 0;
}

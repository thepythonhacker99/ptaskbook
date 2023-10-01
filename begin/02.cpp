// Given the side a of a square, find the area S of the square: S = a*a

#include <iostream>

int main() {
  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  int S = a * a;

  // display the answers
  std::cout << "Area: " << S << std::endl;

  return 0;
}

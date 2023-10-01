// Given the side a of a square, find the area S of the square: S = a*a

#include <iostream>

int main() {
  int a;

  std::cout << "a: ";
  std::cin >> a;

  int S = a * a;
  std::cout << "Area: " << S << std::endl;

  return 0;
}

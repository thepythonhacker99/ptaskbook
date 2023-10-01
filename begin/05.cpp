// Given the edge a of a cube, find the volume V = a3 and the surface area S =
// 6·a*a of the cube

#include <iostream>

int main() {
  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  int V = 3 * a;
  int S = 6 * a * a;

  // display the answer
  std::cout << "Area: " << S << std::endl;
  std::cout << "Volume: " << V << std::endl;

  return 0;
}

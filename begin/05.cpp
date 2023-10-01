// Given the edge a of a cube, find the volume V = a3 and the surface area S =
// 6·a*a of the cube

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Given the edge a of a cube, find the volume V = a3 and the "
               "surface area S = 6·a2 of the cube"
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  int V = std::pow(a, 3);
  int S = 6 * std::pow(a, 2);

  // display the answer
  std::cout << "Area: " << S << std::endl;
  std::cout << "Volume: " << V << std::endl;

  return 0;
}

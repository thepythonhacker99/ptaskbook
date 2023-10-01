// The edges a, b, c of a right parallelepiped are given. Find the volume V =
// a·b·c and the surface area S = 2·(a·b + b·c + a·c) of the right
// parallelepiped

#include <cmath>
#include <iostream>

int main() {
  std::cout << "The edges a, b, c of a right parallelepiped are given. Find "
               "the volume V = a·b·c and the surface area S = 2·(a·b + b·c + "
               "a·c) of the right parallelepiped"
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

  // get c
  int c;

  std::cout << "c: ";
  std::cin >> c;

  // calculate
  int S = 2 * (a * b + b * c + a * c);
  int V = a * b * c;

  // display the answer
  std::cout << "Area: " << S << std::endl;
  std::cout << "Volume: " << V << std::endl;

  return 0;
}

// The coordinates (x1, y1) and (x2, y2) of two points are given. Find the
// distance between the points:
// ((x2 − x1)2 + (y2 − y1)2)1 / 2

#include <cmath>
#include <iostream>

int main() {
  std::cout
      << "The coordinates (x1, y1) and (x2, y2) of two points are given. Find "
         "the distance between the points: ((x2 − x1)2 + (y2 − y1)2)1 / 2"
      << std::endl
      << std::endl;

  // get x1, y1
  float x1, y1;

  std::cout << "x1 y1: ";
  std::cin >> x1 >> y1;

  // get x2, y2
  float x2, y2;

  std::cout << "x2 y2: ";
  std::cin >> x2 >> y2;

  // calculate
  float D = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

  // display the answers
  std::cout << std::endl;

  std::cout << "Distance: " << D << std::endl;

  return 0;
}

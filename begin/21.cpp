// The coordinates (x1, y1), (x2, y2), (x3, y3) of the triangle vertices are
// given. Find the perimeter and the area of the triangle using the formula for
// distance between two points in the plane (see Begin20). The area of a
// triangle with sides a, b, c can be found by Heron formula:
// S = (p·(p − a)·(p − b)·(p − c))1/2,
// where p = (a + b + c)/2 is the half-perimeter.

#include <cmath>
#include <iostream>

float distance(float x1, float y1, float x2, float y2) {
  return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int main() {
  std::cout
      << "The coordinates (x1, y1), (x2, y2), (x3, y3) of the triangle "
         "vertices are given. Find the perimeter and the area of the triangle"
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

  // get x3, y3
  float x3, y3;

  std::cout << "x3 y3: ";
  std::cin >> x3 >> y3;

  // calculate
  float a = distance(x1, y1, x2, y2);
  float b = distance(x1, y1, x3, y3);
  float c = distance(x2, y2, x3, y3);

  float p = (a + b + c) / 2;
  float S = std::sqrt(p * (p - a) * (p - b) * (p - c));

  // display the answers
  std::cout << std::endl;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  std::cout << std::endl;

  std::cout << "p: " << p << std::endl;
  std::cout << "Area: " << S << std::endl;

  return 0;
}

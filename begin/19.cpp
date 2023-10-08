// The coordinates (x1, y1) and (x2, y2) of two opposite vertices of a rectangle
// are given. Sides of the rectangle are parallel to coordinate axes. Find the
// perimeter and the area of the rectangle.

#include <iostream>

float calculateDistance(float x1, float x2) { return std::abs(x1 - x2); }

int main() {
  std::cout
      << "The coordinates (x1, y1) and (x2, y2) of two opposite vertices of a "
         "rectangle are given. Sides of the rectangle are parallel to "
         "coordinate axes. Find the perimeter and the area of the rectangle."
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
  float xLength = calculateDistance(x1, x2);
  float yLength = calculateDistance(y1, y2);

  float A = xLength * yLength;
  float P = 2 * (xLength + yLength);

  // display the answers
  std::cout << std::endl;

  std::cout << "Length: " << xLength << std::endl;
  std::cout << "Width: " << yLength << std::endl;

  std::cout << std::endl;

  std::cout << "Area: " << A << std::endl;
  std::cout << "Perimeter: " << P << std::endl;

  return 0;
}

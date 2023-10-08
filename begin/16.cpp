// Two points with the coordinates x1 and x2 are given on the real axis. Find
// the distance between these points: |x2 − x1|

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Two points with the coordinates x1 and x2 are given on the "
               "real axis. Find the distance between these points: |x2 − x1|"
            << std::endl
            << std::endl;

  // get x1
  float x1;

  std::cout << "x1: ";
  std::cin >> x1;

  // get x2
  float x2;

  std::cout << "x2: ";
  std::cin >> x2;

  // calculate
  float D = std::abs(x2 - x1);

  // display the answers
  std::cout << std::endl;

  std::cout << "Distance: " << D << std::endl;

  return 0;
}

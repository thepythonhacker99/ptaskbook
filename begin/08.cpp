// Given two numbers a and b, find their average: (a + b)/2

#include <iostream>

int main() {
  std::cout << "Given two numbers a and b, find their average: (a + b)/2"
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

  // calculate
  float averege = (a + b) / 2.f;

  // display the answer
  std::cout << std::endl;

  std::cout << "Averege: " << averege << std::endl;
  return 0;
}

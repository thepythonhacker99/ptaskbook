// Exchange the values of two given variables A and B. Output the new values of
// A and B.

#include <iostream>
#include <variant>

int main() {
  std::cout << "Exchange the values of two given variables A and B. Output the "
               "new values of A and B."
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
  std::swap(a, b);

  // display the answer
  std::cout << std::endl;

  std::cout << "A: " << a << std::endl;
  std::cout << "B: " << b << std::endl;

  return 0;
}

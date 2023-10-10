// Variables A, B, C are given. Change values of the variables by moving the
// given value of A into the variable C, the given value of C into the variable
// B, and the given value of B into the variable A. Output the new values of A,
// B, C.

#include <cmath>
#include <iostream>
#include <type_traits>

int main() {
  std::cout << "Variables A, B, C are given. Change values of the variables by "
               "moving the given value of A into the variable C, the given "
               "value of C into the variable B, and the given value of B into "
               "the variable A. Output the new values of A, B, C."
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
  std::swap(a, c); // swap a and c -> c, b, a
  std::swap(a, b); // swap c and b -> b, c, a

  // display the answer
  std::cout << std::endl;

  std::cout << "A: " << a << std::endl;
  std::cout << "B: " << b << std::endl;
  std::cout << "C: " << c << std::endl;

  return 0;
}

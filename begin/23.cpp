// Variables A, B, C are given. Change values of the variables by moving the
// given value of A into the variable B, the given value of B into the variable
// C, and the given value of C into the variable A. Output the new values of A,
// B, C.

#include <iostream>
#include <variant>

int main() {
  std::cout << "Variables A, B, C are given. Change values of the variables by "
               "moving the given value of A into the variable B, the given "
               "value of B into the variable C, and the given value of C into "
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
  std::swap(a, b); // swap a with b -> b, a, c
  std::swap(a, c); // swap b with c -> c, a, b

  // display the answer
  std::cout << std::endl;

  std::cout << "A: " << a << std::endl;
  std::cout << "B: " << b << std::endl;
  std::cout << "C: " << c << std::endl;

  return 0;
}

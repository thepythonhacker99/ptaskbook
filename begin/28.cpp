// Given a number A, compute a power A15 using five multiplying operators for
// computing A2, A3, A5, A10, A15 sequentially. Output all obtained powers of
// the number A.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Given a number A, compute a power A15 using five multiplying "
               "operators for computing A2, A3, A5, A10, A15 sequentially. "
               "Output all obtained powers of the number A."
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  long long aPow2 = std::pow(a, 2);
  long long aPow3 = a * aPow2;
  long long aPow5 = aPow2 * aPow3;
  long long aPow10 = std::pow(aPow5, 2);
  long long aPow15 = aPow10 * aPow5;

  // display the answers
  std::cout << std::endl;

  std::cout << "a2: " << aPow2 << std::endl;
  std::cout << "a3: " << aPow3 << std::endl;
  std::cout << "a5: " << aPow5 << std::endl;
  std::cout << "a10: " << aPow10 << std::endl;
  std::cout << "a15: " << aPow15 << std::endl;

  return 0;
}

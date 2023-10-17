// Given a number A, compute a power A8 using three multiplying operators for
// computing A2, A4, A8 sequentially. Output all obtained powers of the number
// A.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Given a number A, compute a power A8 using three multiplying "
               "operators for computing A2, A4, A8 sequentially. Output all "
               "obtained powers of the number A."
            << std::endl
            << std::endl;

  // get a
  int a;

  std::cout << "a: ";
  std::cin >> a;

  // calculate
  long long aPow2 = std::pow(a, 2);
  long long aPow4 = std::pow(aPow2, 2);
  long long aPow8 = std::pow(aPow4, 2);

  // display the answers
  std::cout << std::endl;

  std::cout << "a2: " << aPow2 << std::endl;
  std::cout << "a4: " << aPow4 << std::endl;
  std::cout << "a8: " << aPow8 << std::endl;

  return 0;
}

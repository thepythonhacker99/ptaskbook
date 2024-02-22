// A file size is given in bytes. Find the amount of
// full Kbytes of this size (1 K = 1024 bytes). 
// Use the operator of integer division.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "A file size is given in bytes. "
            << "Find the amount of full Kbytes "
            << " of this size (1 K = "
            << "1024 bytes). Use the operator "
            << "of integer division."
            << std::endl
            << std::endl;

  int b;

  std::cout << "b (file size in bytes): ";
  std::cin >> b;

  // calculate
  int kb = b / 1024;

  // display the answers
  std::cout << std::endl;
  std::cout << "Nr. of full full KB in `b`: " << kb << "KB" << std::endl;

  return 0;
}

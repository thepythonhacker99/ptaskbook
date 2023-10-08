// Three points A, B, C are given on the real axis. Find the length of AC, the
// length of BC, and the sum of these lengths.

#include <cmath>
#include <iostream>

float calculateDistance(float x1, float x2) { return std::abs(x1 - x2); }

int main() {
  std::cout << "Three points A, B, C are given on the real axis. Find the "
               "length of AC, the length of BC, and the sum of these lengths."
            << std::endl
            << std::endl;

  // get A
  float A;

  std::cout << "A: ";
  std::cin >> A;

  // get B
  float B;

  std::cout << "B: ";
  std::cin >> B;

  // get C
  float C;

  std::cout << "C: ";
  std::cin >> C;

  // calculate
  float AC = calculateDistance(A, C);
  float BC = calculateDistance(B, C);

  float sum = AC + BC;

  // display the answers
  std::cout << std::endl;

  std::cout << "AC: " << AC << std::endl;
  std::cout << "BC: " << BC << std::endl;
  std::cout << "Sum: " << sum << std::endl;

  return 0;
}

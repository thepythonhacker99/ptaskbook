// Three points A, B, C are given on the real axis, the point C is located
// between the points A and B. Find the product of the length of AC and the
// length of BC.

#include <cmath>
#include <iostream>

void assert(bool expression, const std::string &message) {
  if (!expression) {
    std::cout << message << std::endl;
    exit(1);
  }
}

float calculateDistance(float x1, float x2) { return std::abs(x1 - x2); }

int main() {
  std::cout << "Three points A, B, C are given on the real axis, the point C "
               "is located between the points A and B. Find the product of the "
               "length of AC and the length of BC."
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

  assert(A < C && C < B, "C must be between A and B!");

  // calculate
  float AC = calculateDistance(A, C);
  float BC = calculateDistance(B, C);

  float product = AC * BC;

  // display the answers
  std::cout << std::endl;

  std::cout << "AC: " << AC << std::endl;
  std::cout << "BC: " << BC << std::endl;
  std::cout << "Product: " << product << std::endl;

  return 0;
}

// A centigrade temperature T is given. Convert it into a
// Fahrenheit temperature. The centigrade temperature Tc
// and the Fahrenheit temperature Tf are connected as:
// Tc = (Tf − 32)·5/9.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "A centigrade temperature T is given. Convert "
            << "it into a Fahrenheit temperature. The "
            << "centigrade temperature Tc and the Fahrenheit "
            << "temperature Tf are connected as: "
            << "Tc = (Tf - 32)·5/9."
            << std::endl
            << std::endl;

  // get T
  float t;

  std::cout << "t: ";
  std::cin >> t;

  // calculate
  float fahrenheit = (t / (5.f / 9.f)) + 32.f;

  // display the answers
  std::cout << std::endl;

  std::cout << "Fahrenheit: " << fahrenheit << std::endl;

  return 0;
}

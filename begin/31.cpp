// A Fahrenheit temperature T is given. Convert it into a centigrade
// temperature. The centigrade temperature Tc and the Fahrenheit
// temperature Tf are connected as:

// Tc = (Tf − 32)·5/9.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "A Fahrenheit temperature T is given. Convert it "
            << "into a centigrade temperature. The centigrade "
            << "temperature Tc and the Fahrenheit temperature "
            << "Tf are connected as: Tc = (Tf - 32)·5/9."
            << std::endl
            << std::endl;

  // get T
  float t;

  std::cout << "t: ";
  std::cin >> t;

  // calculate
  float celcius = (t - 32.f) * 5.f / 9.f;

  // display the answers
  std::cout << std::endl;

  std::cout << "Celcius: " << celcius << std::endl;

  return 0;
}

#include <cstdint>
#include <iostream>
#include <string>

int main() {
  int number;
  std::string exclamations;
  std::cin >> number >> exclamations;

  int step = static_cast<int>(exclamations.size());
  std::uint64_t result = 1;
  for (int i = number; i > 0; i -= step) {
    result *= i;
  }
  std::cout << result << '\n';
  return 0;
}

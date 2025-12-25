#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
  int amount;
  std::cin >> amount;

  for (int i = 0; i < amount; ++i) {
    std::uint64_t number;
    std::cin >> number;

    number = number * 8 - 7;
    std::uint64_t square_root = static_cast<uint64_t>(std::sqrt(number));
    if (square_root * square_root == number) {
      std::cout << "1 ";
    } else {
      std::cout << "0 ";
    }
  }
  std::cout << '\n';
  return 0;
}

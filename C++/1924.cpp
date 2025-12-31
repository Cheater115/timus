#include <iostream>

int main() {
  int n;
  std::cin >> n;
  auto is_black = n % 4 == 0 || (n + 1) % 4 == 0;
  std::cout << (is_black ? "black" : "grimy") << '\n';
  return 0;
}

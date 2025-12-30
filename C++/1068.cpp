#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int result = (n > 0) ? n * (n + 1) / 2 : n * (1 - n) / 2 + 1;
  std::cout << result << '\n';
  return 0;
}

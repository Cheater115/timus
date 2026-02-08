#include <iostream>

int main() {
  int n;
  int k;
  std::cin >> n >> k;
  int result = n * (n - 1) / 2 - k;
  std::cout << result << '\n';
  return 0;
}

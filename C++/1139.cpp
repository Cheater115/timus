#include <iostream>
#include <numeric>

int main() {
  unsigned rows;
  unsigned cols;
  std::cin >> rows >> cols;

  unsigned result = (rows - 1) + (cols - 1) - std::gcd(rows - 1, cols - 1);
  std::cout << result << '\n';
  return 0;
}

#include <algorithm>
#include <iostream>

int main() {
  int a;
  int b;
  std::cin >> a >> b;

  int res = std::max(2 * b + 40, 2 * a + 39);
  std::cout << res << '\n';
  return 0;
}

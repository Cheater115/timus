#include <algorithm>
#include <initializer_list>
#include <iostream>

int main() {
  int a;
  int b;
  int c;
  std::cin >> a >> b >> c;

  int minimum = std::min({a + b + c, a + b - c, a + b * c, a - b + c, a - b - c,
                          a - b * c, a * b + c, a * b - c, a * b * c});
  std::cout << minimum << '\n';

  return 0;
}

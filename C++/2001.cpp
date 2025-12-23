#include <iostream>

int main() {
  int a1, b1, a2, b2, a3, b3;
  std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

  int a = a1 - a3;
  int b = b1 - b2;
  std::cout << a << ' ' << b << '\n';
  return 0;
}

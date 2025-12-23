#include <iostream>

int main() {
  int lock1;
  int lock2;
  std::cin >> lock1 >> lock2;

  bool result = lock1 % 2 == 0 || lock2 % 2 != 0;
  std::cout << (result ? "yes" : "no") << '\n';
  return 0;
}

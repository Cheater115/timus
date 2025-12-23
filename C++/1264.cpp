#include <iostream>

int main() {
  int array_size;
  int limit;
  std::cin >> array_size >> limit;

  int result = array_size * (limit + 1);
  std::cout << result << '\n';
  return 0;
}

#include <iostream>

int main() {
  int harry;
  int larry;
  std::cin >> harry >> larry;

  int total = harry + larry - 1;
  int result_harry = total - harry;
  int result_larry = total - larry;
  std::cout << result_harry << ' ' << result_larry << '\n';
  return 0;
}

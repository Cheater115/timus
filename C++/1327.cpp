#include <iostream>

int main() {
  int start;
  int end;
  std::cin >> start >> end;

  end += 1 + end % 2;
  int result = (end - start) / 2;
  std::cout << result << '\n';
  return 0;
}

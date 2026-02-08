#include <cstddef>
#include <iostream>
#include <string>

int main() {
  std::size_t size;
  std::cin >> size;

  std::string result;
  result.append(size - 1, '(');
  for (std::size_t i = 1; i <= size; ++i) {
    result += "sin(1";
    for (std::size_t j = 2; j <= i; ++j) {
      result += (j % 2 != 0) ? '+' : '-';
      result += "sin(";
      result += std::to_string(j);
    }
    result.append(i, ')');
    result += '+';
    result += std::to_string(size + 1 - i);
    result += ')';
  }
  result.pop_back();

  std::cout << result << '\n';
  return 0;
}

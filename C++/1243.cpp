#include <iostream>
#include <string>

int main() {
  std::string number;
  std::cin >> number;

  int answer = 0;
  for (auto it = number.begin(); it != number.end(); ++it) {
    answer = (answer * 10 + (*it - '0')) % 7;
  }
  std::cout << answer << '\n';
  return 0;
}

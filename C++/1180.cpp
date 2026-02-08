#include <iostream>
#include <string>

int main() {
  std::string number;
  std::cin >> number;

  int sum = 0;
  for (auto x : number) {
    sum += x - '0';
  }
  auto mod = sum % 3;
  if (mod != 0) {
    std::cout << "1\n" << mod << '\n';
  } else {
    std::cout << "2\n";
  }
  return 0;
}

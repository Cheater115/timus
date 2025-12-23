#include <iostream>
#include <string>

int main() {
  int friends;
  std::cin >> friends;

  int count = 2 + friends;
  for (int i = 0; i < friends; ++i) {
    std::string name;
    std::cin >> name;
    if (name.find('+') != std::string::npos) {
      ++count;
    }
  }
  int check = (count != 13 ? count : count + 1) * 100;
  std::cout << check << '\n';
  return 0;
}

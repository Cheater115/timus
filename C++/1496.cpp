#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  int count;
  std::cin >> count;

  std::unordered_set<std::string> names;
  std::unordered_set<std::string> spamers;
  std::string name;
  for (int i = 0; i < count; ++i) {
    std::cin >> name;
    if (names.find(name) != names.end()) {
      spamers.insert(name);
    }
    names.insert(name);
  }

  for (auto&& name : spamers) {
    std::cout << name << '\n';
  }
  return 0;
}

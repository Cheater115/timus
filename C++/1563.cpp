#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string line;
  std::getline(std::cin, line);
  int shops_count = std::stoi(line);

  std::unordered_set<std::string> shops;
  for (int i = 0; i < shops_count; ++i) {
    std::getline(std::cin, line);
    shops.insert(line);
  }
  int answer = shops_count - static_cast<int>(shops.size());
  std::cout << answer << '\n';
  return 0;
}

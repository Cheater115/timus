#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
  const std::vector<std::pair<int, std::string>> ranges = {
      {5, "few"},     {10, "several"},  {20, "pack"},
      {50, "lots"},   {100, "horde"},   {250, "throng"},
      {500, "swarm"}, {1000, "zounds"}, {2001, "legion"}};

  int count;
  std::cin >> count;

  auto it = std::find_if(ranges.begin(), ranges.end(),
                         [count](const auto& p) { return count < p.first; });
  std::cout << it->second << '\n';
  return 0;
}

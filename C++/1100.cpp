#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

struct Command {
  int id;
  int count;
};

std::istream& operator>>(std::istream& is, Command& cmd) {
  is >> cmd.id >> cmd.count;
  return is;
}

std::ostream& operator<<(std::ostream& os, const Command& cmd) {
  os << cmd.id << ' ' << cmd.count;
  return os;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::size_t size;
  std::cin >> size;
  std::vector<Command> commands(size);
  std::copy_n(std::istream_iterator<Command>(std::cin), size, commands.begin());

  std::stable_sort(
      commands.begin(), commands.end(),
      [](const Command& a, const Command& b) { return a.count > b.count; });

  std::copy(commands.begin(), commands.end(),
            std::ostream_iterator<Command>(std::cout, "\n"));
  return 0;
}

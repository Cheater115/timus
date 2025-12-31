#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  using Box = std::unordered_set<std::string>;
  const Box left({"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf",
                  "Phoebus", "Ralph", "Robin"});
  const Box center({"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey",
                    "Silver", "Simba", "Stitch"});
  const Box right({"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai",
                   "Tarzan", "Tiana", "Winnie"});

  std::size_t letters;
  std::cin >> letters;

  std::size_t steps = 0;
  std::size_t cur_pos = 0;
  std::string name;
  for (std::size_t i = 0; i < letters; ++i) {
    std::cin >> name;
    std::size_t next_pos = cur_pos;
    if (left.find(name) != left.end()) {
      next_pos = 0;
    } else if (center.find(name) != center.end()) {
      next_pos = 1;
    } else if (right.find(name) != right.end()) {
      next_pos = 2;
    }
    steps += (cur_pos >= next_pos) ? cur_pos - next_pos : next_pos - cur_pos;
    cur_pos = next_pos;
  }

  std::cout << steps << '\n';
  return 0;
}

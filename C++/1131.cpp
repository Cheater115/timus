#include <bit>
#include <cstddef>
#include <iostream>

int main() {
  unsigned computers;
  unsigned connectors;
  std::cin >> computers >> connectors;

  unsigned base_tm = std::bit_width(connectors - 1);
  unsigned base_count = 1 << base_tm;
  unsigned result = base_tm;
  if (base_count >= computers) {
    result = std::bit_width(computers - 1);
  } else {
    unsigned remaining = computers - base_count;
    result += (remaining + connectors - 1) / connectors;
  }
  std::cout << result << '\n';
  return 0;
}

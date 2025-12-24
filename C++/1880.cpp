#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::size_t size;
  std::vector<int> first;
  std::vector<int> second;
  std::vector<int> third;

  std::cin >> size;
  first.reserve(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size,
              std::back_inserter(first));
  std::cin >> size;
  second.reserve(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size,
              std::back_inserter(second));
  std::cin >> size;
  third.reserve(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size,
              std::back_inserter(third));

  int count = 0;
  auto fb = first.begin();
  auto fe = first.end();
  auto sb = second.begin();
  auto se = second.end();
  auto tb = third.begin();
  auto te = third.end();
  while (fb != fe && sb != se && tb != te) {
    auto a = *fb;
    auto b = *sb;
    auto c = *tb;
    if (a == b && b == c) {
      ++count;
      ++fb;
      ++sb;
      ++tb;
    } else if (a <= b && a <= c) {
      ++fb;
    } else if (b <= a && b <= c) {
      ++sb;
    } else {
      ++tb;
    }
  }
  std::cout << count << '\n';
  return 0;
}

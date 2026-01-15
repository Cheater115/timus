#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
  int groups;
  std::cin >> groups;

  std::vector<int> counter(groups);
  std::copy_n(std::istream_iterator<int>(std::cin), groups, counter.begin());

  std::sort(counter.begin(), counter.end());
  int half = groups / 2 + 1;
  int result = std::accumulate(counter.begin(), counter.begin() + half, 0,
                               [](int acc, int b) { return acc + b / 2 + 1; });
  std::cout << result << '\n';
  return 0;
}

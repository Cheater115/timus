#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::size_t candidates;
  std::size_t voters;
  std::cin >> candidates >> voters;

  std::vector<int> votes(candidates, 0);
  for (std::size_t i = 0; i < voters; ++i) {
    int id;
    std::cin >> id;
    ++votes[id - 1];
  }

  std::cout << std::fixed << std::setprecision(2);
  const double coeff = 100.0 / voters;
  std::transform(votes.begin(), votes.end(),
                 std::ostream_iterator<double>(std::cout, "%\n"),
                 [coeff](int v) { return v * coeff; });
  return 0;
}

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
  const int AMOUNT_PROBLEMS = 10;
  const int PENALTY_MINUTES = 20;

  int tm_qxx, tm_zzz;
  std::cin >> tm_qxx >> tm_zzz;
  std::vector<int> attemts(AMOUNT_PROBLEMS);
  std::copy_n(std::istream_iterator<int>(std::cin), AMOUNT_PROBLEMS,
              attemts.begin());

  auto count = std::accumulate(attemts.begin(), attemts.end(), 0);
  if (tm_qxx <= tm_zzz - count * PENALTY_MINUTES) {
    std::cout << "No chance." << '\n';
  } else {
    std::cout << "Dirty debug :(" << '\n';
  }
  return 0;
}

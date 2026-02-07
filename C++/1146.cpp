#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

using TArray = std::vector<int>;
using TMatrix = std::vector<TArray>;

int findMaxSum(const TArray& array) {
  int result = array.front();
  int curr_max = 0;
  for (auto x : array) {
    curr_max = std::max(curr_max + x, x);
    result = std::max(result, curr_max);
  }
  return result;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::size_t size;
  std::cin >> size;
  TMatrix matr(size, TArray(size));
  for (auto&& row : matr) {
    std::copy_n(std::istream_iterator<int>(std::cin), size, row.begin());
  }

  auto max_sum = matr[0][0];
  TArray column_sums(size);
  for (std::size_t top = 0; top < size; ++top) {
    std::fill(column_sums.begin(), column_sums.end(), 0);
    for (std::size_t bottom = top; bottom < size; ++bottom) {
      std::transform(column_sums.begin(), column_sums.end(),
                     matr[bottom].begin(), column_sums.begin(),
                     std::plus<int>());
      auto max_block_sum = findMaxSum(column_sums);
      max_sum = std::max(max_sum, max_block_sum);
    }
  }
  std::cout << max_sum << '\n';
  return 0;
}

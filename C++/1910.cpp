#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::size_t n;
  std::cin >> n;

  std::vector<int> array;
  array.reserve(n);
  std::copy_n(std::istream_iterator<int>(std::cin), n,
              std::back_inserter<std::vector<int>>(array));

  std::size_t number = 2;
  int max_sum = array[0] + array[1] + array[2];
  int cur_sum = max_sum;
  for (std::size_t i = 3; i < n; ++i) {
    cur_sum += array[i] - array[i - 3];
    if (max_sum < cur_sum) {
      max_sum = cur_sum;
      number = i;
    }
  }
  std::cout << max_sum << ' ' << number << '\n';
  return 0;
}

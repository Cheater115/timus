#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<std::uint64_t> numbers;

  std::copy(std::istream_iterator<std::uint64_t>(std::cin),
            std::istream_iterator<std::uint64_t>(),
            std::back_inserter(numbers));

  std::cout << std::fixed << std::setprecision(4);
  std::transform(numbers.rbegin(), numbers.rend(),
                 std::ostream_iterator<double>(std::cout, "\n"),
                 [](std::uint64_t num) { return std::sqrt(num); });

  return 0;
}

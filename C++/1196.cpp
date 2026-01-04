#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int nrecords;
  std::cin >> nrecords;
  std::vector<int> teacher_years;
  teacher_years.reserve(nrecords);
  std::copy_n(std::istream_iterator<int>(std::cin), nrecords,
              std::back_inserter<std::vector<int>>(teacher_years));

  int years;
  std::cin >> years;
  int count = 0;
  for (int i = 0; i < years; ++i) {
    int year;
    std::cin >> year;
    if (std::binary_search(teacher_years.begin(), teacher_years.end(), year)) {
      ++count;
    }
  }
  std::cout << count << '\n';

  return 0;
}

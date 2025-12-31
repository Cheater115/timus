#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

int main() {
  int count;
  std::cin >> count;

  std::vector<int> marks;
  marks.reserve(count);
  std::copy_n(std::istream_iterator<int>(std::cin), count,
              std::back_insert_iterator<std::vector<int>>(marks));

  std::string result;
  if (std::find(marks.begin(), marks.end(), 3) != marks.end()) {
    result = "None";
  } else if (std::find(marks.begin(), marks.end(), 4) == marks.end()) {
    result = "Named";
  } else if (2 * std::accumulate(marks.begin(), marks.end(), 0) < 9 * count) {
    result = "Common";
  } else {
    result = "High";
  }
  std::cout << result << '\n';

  return 0;
}

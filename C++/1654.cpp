#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

template <class It>
It decode(It begin, It end) {
  using T = typename std::iterator_traits<It>::value_type;
  std::vector<T> stack;
  for (It it = begin; it != end; ++it) {
    if (stack.empty() || stack.back() != *it) {
      stack.push_back(*it);
    } else {
      stack.pop_back();
    }
  }
  return std::copy(stack.begin(), stack.end(), begin);
}

int main() {
  std::string source;
  std::cin >> source;

  auto it = decode(source.begin(), source.end());
  source.erase(it, source.end());
  std::cout << source << '\n';
  return 0;
}

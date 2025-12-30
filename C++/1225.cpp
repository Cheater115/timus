#include <iostream>
#include <utility>

int main() {
  int n;
  std::cin >> n;

  unsigned curr = 2;
  unsigned next = 2;
  for (int i = 1; i < n; ++i) {
    curr = std::exchange(next, curr + next);
  }
  std::cout << curr << '\n';
  return 0;
}
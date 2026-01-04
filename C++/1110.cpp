#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

unsigned binPowMod(unsigned x, unsigned n, unsigned mod) {
  if (x == 0) {
    return x;
  }
  unsigned res = 1;
  unsigned a = x;
  while (n != 0) {
    if ((n & 1) == 1) {
      res = (res * a) % mod;
    }
    a = (a * a) % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  unsigned n;
  unsigned m;
  unsigned y;
  std::cin >> n >> m >> y;

  std::vector<unsigned> numbers;
  for (unsigned x = 0; x < m; ++x) {
    if (binPowMod(x, n, m) == y) {
      numbers.push_back(x);
    }
  }

  if (!numbers.empty()) {
    std::copy(numbers.begin(), numbers.end(),
              std::ostream_iterator<unsigned>(std::cout, " "));
    std::cout << '\n';
  } else {
    std::cout << "-1\n";
  }

  return 0;
}

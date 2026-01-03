#include <cmath>
#include <iostream>

int main() {
  int sum;
  std::cin >> sum;

  int sumx2 = 2 * sum;
  int limit = static_cast<int>(sqrt(sumx2));
  int n = 0;
  int a = 0;
  for (n = limit; n > 0; --n) {
    if (sumx2 % n != 0) {
      continue;
    }
    int k = sumx2 / n;
    if (k <= n || k % 2 == n % 2) {
      continue;
    }
    a = (k - n + 1) / 2;
    break;
  }
  std::cout << a << ' ' << n << '\n';
  return 0;
}

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
#include <utility>

int backpack(const std::vector<int>& weights, int max_weight) {
  int n = static_cast<int>(weights.size());
  std::vector<int> dp_prev(max_weight + 1, 0);
  std::vector<int> dp_curr(max_weight + 1, 0);
  for (int i = 1; i <= n; ++i) {
    int w = weights[i - 1];
    for (int j = 1; j <= max_weight; ++j) {
      if (j >= w) {
        dp_curr[j] = std::max(dp_prev[j - w] + w, dp_prev[j]);
      } else {
        dp_curr[j] = dp_prev[j];
      }
    }
    std::swap(dp_curr, dp_prev);
  }
  return dp_prev.back();
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> weights(n);
  std::copy_n(std::istream_iterator<int>(std::cin), n, weights.begin());

  int sum = std::accumulate(weights.begin(), weights.end(), 0);
  int first = backpack(weights, sum / 2);
  int second = sum - first;
  int result = abs(first - second);
  std::cout << result << '\n';
  return 0;
}

#include <cmath>
#include <cstddef>
#include <functional>
#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>

namespace std {
template <>
struct hash<std::pair<int, int>> {
  size_t operator()(const std::pair<int, int>& p) const noexcept {
    size_t h1 = std::hash<int>{}(p.first);
    size_t h2 = std::hash<int>{}(p.second);
    return h1 ^ (h2 << 1);
  }
};
}  // namespace std

std::size_t countLen(std::size_t rows, std::size_t cols,
                     const std::unordered_set<std::pair<int, int>>& blocks) {
  const double block_side = 100;
  const double block_diag = block_side * std::sqrt(2.0);
  if (blocks.size() == 0) {
    return (rows + cols) * 100;
  }
  std::vector<double> dp_prev(cols + 1, 0);
  std::vector<double> dp_curr(cols + 1, 0);
  for (std::size_t i = 1; i <= cols; ++i) {
    dp_prev[i] = dp_prev[i - 1] + block_side;
  }
  for (std::size_t i = 1; i <= rows; ++i) {
    dp_curr[0] = dp_prev[0] + block_side;
    for (std::size_t j = 1; j <= cols; ++j) {
      dp_curr[j] = std::min(dp_curr[j - 1], dp_prev[j]) + block_side;
      auto coords = std::make_pair(i, j);
      if (blocks.find(coords) != blocks.end()) {
        dp_curr[j] = std::min(dp_curr[j], dp_prev[j - 1] + block_diag);
      }
    }
    std::swap(dp_curr, dp_prev);
  }
  auto result = static_cast<std::size_t>(std::round(dp_prev[cols]));
  return result;
}

int main() {
  std::cin.sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::size_t rows;
  std::size_t cols;
  std::cin >> rows >> cols;

  std::size_t count_blocks;
  std::cin >> count_blocks;
  std::unordered_set<std::pair<int, int>> blocks;
  for (std::size_t i = 0; i < count_blocks; ++i) {
    int x;
    int y;
    std::cin >> x >> y;
    blocks.insert(std::make_pair(x, y));
  }

  auto len = countLen(rows, cols, blocks);
  std::cout << len << '\n';
  return 0;
}

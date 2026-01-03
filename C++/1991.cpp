#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
  int blocks;
  int count_per_block;
  std::cin >> blocks >> count_per_block;

  std::vector<int> carts;
  carts.reserve(blocks);
  std::copy_n(std::istream_iterator<int>(std::cin), blocks,
              std::back_inserter<std::vector<int>>(carts));

  int booms = std::accumulate(
      carts.begin(), carts.end(), 0, [count_per_block](int acc, int bombs) {
        return acc + (count_per_block < bombs ? bombs - count_per_block : 0);
      });
  int droids = std::accumulate(
      carts.cbegin(), carts.cend(), 0, [count_per_block](int acc, int bombs) {
        return acc + (count_per_block < bombs ? 0 : count_per_block - bombs);
      });
  std::cout << booms << ' ' << droids << '\n';
  return 0;
}

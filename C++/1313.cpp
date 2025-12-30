#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::size_t size;
  std::cin >> size;

  std::size_t matrix_size = size * size;
  std::vector<int> matrix;
  matrix.reserve(matrix_size);

  std::copy_n(std::istream_iterator<int>(std::cin), matrix_size,
              std::back_inserter<std::vector<int>>(matrix));

  std::size_t row = 0;
  std::size_t col = 0;
  for (std::size_t i = 0; i < matrix_size; ++i) {
    std::cout << matrix[row * size + col] << ' ';
    if (col + 1 == size) {
      col = row + 1;
      row = size - 1;
    } else if (row == 0) {
      row = col + 1;
      col = 0;
    } else {
      --row;
      ++col;
    }
  }
  std::cout << '\n';
  return 0;
}

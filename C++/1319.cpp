#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::size_t matrix_size;
  std::cin >> matrix_size;

  std::size_t total_size = matrix_size * matrix_size;
  std::vector<int> matrix(total_size);

  std::size_t row = 0;
  std::size_t col = matrix_size - 1;
  for (std::size_t i = 1; i <= total_size; ++i) {
    matrix[row * matrix_size + col] = i;
    if (row == matrix_size - 1) {
      row = (matrix_size - 1) - (col - 1);
      col = 0;
    } else if (col == matrix_size - 1) {
      col = matrix_size - 1 - (row + 1);
      row = 0;
    } else {
      ++row;
      ++col;
    }
  }

  for (auto it = matrix.begin(); it != matrix.end(); it += matrix_size) {
    std::copy(it, it + matrix_size, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
  }
  return 0;
}

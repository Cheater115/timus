#include <iostream>

int main() {
  int numbers;
  int width;
  int height;

  std::cin >> numbers >> width >> height;

  int area = height * width;
  int result = 2 * area * numbers;
  std::cout << result << '\n';

  return 0;
}

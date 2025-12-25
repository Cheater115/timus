#include <iostream>

int main() {
  int n;
  int m;
  std::cin >> n >> m;

  const char* messages[] = {"[second]=:]", "[:=[first]"};
  int steps = n * m - 1;
  int index = steps % 2;
  std::cout << messages[index] << '\n';
  return 0;
}

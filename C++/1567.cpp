#include <cctype>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>

int mapLetterClicks(char c) {
  if (std::islower(c)) {
    return (c - 'a') % 3 + 1;
  }
  if (c == '.' || c == ' ') {
    return 1;
  }
  if (c == ',') {
    return 2;
  }
  if (c == '!') {
    return 3;
  }
  return 0;
}

int main() {
  std::string line;
  std::getline(std::cin, line);

  int count = std::accumulate(line.begin(), line.end(), 0, [](int acc, char v) {
    return acc + mapLetterClicks(v);
  });
  std::cout << count << '\n';
  return 0;
}

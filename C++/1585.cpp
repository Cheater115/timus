#include <cstddef>
#include <iostream>
#include <string>

int main() {
  const std::string emperor_pinguin = "Emperor Penguin";
  const std::string little_pinguin = "Little Penguin";
  const std::string macaroni_pinguin = "Macaroni Penguin";

  std::size_t n;
  std::cin >> n;
  std::cin.ignore(128, '\n');

  int emperor = 0;
  int little = 0;
  int macaroni = 0;
  std::string title;
  for (std::size_t i = 0; i < n; ++i) {
    std::getline(std::cin, title);
    if (title == emperor_pinguin) {
      ++emperor;
    } else if (title == little_pinguin) {
      ++little;
    } else if (title == macaroni_pinguin) {
      ++macaroni;
    }
  }

  std::string result = emperor_pinguin;
  if (little >= emperor && little >= macaroni) {
    result = little_pinguin;
  }
  if (macaroni >= emperor && macaroni >= little) {
    result = macaroni_pinguin;
  }
  std::cout << result << '\n';
  return 0;
}

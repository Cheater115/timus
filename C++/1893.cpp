#include <iostream>
#include <string>

int main() {
  std::string seat_number;
  std::cin >> seat_number;

  auto letter = seat_number.back();
  auto number = std::stoi(seat_number.substr(0, seat_number.size() - 1));

  std::string result = "aisle";
  if (letter == 'A' || (number <= 2 && letter == 'D') ||
      (3 <= number && number <= 20 && letter == 'F') ||
      (21 <= number && letter == 'K')) {
    result = "window";
  } else if (21 <= number && (letter == 'B' || letter == 'E' || letter == 'F' ||
                              letter == 'J')) {
    result = "neither";
  }
  std::cout << result << '\n';
  return 0;
}

#include <iostream>

int main() {
  int steaks;
  int pan_capacity;
  std::cin >> steaks >> pan_capacity;

  int result = 2;
  if (steaks > pan_capacity) {
    int steak_sides = 2 * steaks;
    // same as std::ceil(steak_sides / pan_capacity)
    result = (steak_sides + pan_capacity - 1) / pan_capacity;
  }
  std::cout << result << '\n';
  return 0;
}

#include <algorithm>
#include <iostream>

int main() {
  int turn_cars;
  int minutes;
  std::cin >> turn_cars >> minutes;

  int cars = 0;
  for (int i = 0; i < minutes; ++i) {
    int arrived_cars;
    std::cin >> arrived_cars;
    cars = std::max(cars + arrived_cars - turn_cars, 0);
  }
  std::cout << cars << '\n';
  return 0;
}

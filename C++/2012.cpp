#include <iostream>

int main() {
  const int MINUTES_PER_PROBLEM = 45;
  const int MINUTES_PER_HOUR = 60;
  const int HOURS = 5;
  const int TOTAL_PROBLEMS = 12;

  int solved_problems;
  std::cin >> solved_problems;

  int total_minutes = HOURS * MINUTES_PER_HOUR;
  int available_minutes = total_minutes - MINUTES_PER_HOUR;
  int need_minutes = (TOTAL_PROBLEMS - solved_problems) * MINUTES_PER_PROBLEM;
  bool result = need_minutes <= available_minutes;
  std::cout << (result ? "YES" : "NO") << '\n';

  return 0;
}

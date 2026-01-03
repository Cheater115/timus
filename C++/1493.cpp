#include <cmath>
#include <iostream>

int rightSum(int number) {
  number %= 1000;
  return number / 100 + number / 10 % 10 + number % 10;
}

int leftSum(int number) { return rightSum(number / 1000); }

int main() {
  int number;
  std::cin >> number;

  bool flag = false;
  if (abs(leftSum(number) - rightSum(number)) == 1) {
    flag = leftSum(number + 1) == rightSum(number + 1) ||
           leftSum(number - 1) == rightSum(number - 1);
  }
  std::cout << (flag ? "Yes" : "No") << '\n';
  return 0;
}

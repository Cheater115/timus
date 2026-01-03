#include <algorithm>
#include <iostream>

int countPrice(int start_price, int addition, int end_price, int discount) {
  if (start_price >= end_price) {
    return start_price;
  }
  int steps = (end_price - start_price) / (discount + addition);
  start_price += addition * steps;
  end_price -= discount * steps;
  return std::min(start_price + addition, end_price);
}

int main() {
  int start_price;
  int addition;
  int end_price;
  int discount;
  std::cin >> start_price >> addition >> end_price >> discount;

  int price = countPrice(start_price, addition, end_price, discount);
  std::cout << price << '\n';
  return 0;
}

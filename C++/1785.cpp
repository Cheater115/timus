#include <iostream>
#include <string>

int main() {
  int count;
  std::cin >> count;

  std::string result;
  if (count < 5) {
    result = "few";
  } else if (count < 10) {
    result = "several";
  } else if (count < 20) {
    result = "pack";
  } else if (count < 50) {
    result = "lots";
  } else if (count < 100) {
    result = "horde";
  } else if (count < 250) {
    result = "throng";
  } else if (count < 500) {
    result = "swarm";
  } else if (count < 1000) {
    result = "zounds";
  } else {
    result = "legion";
  }
  std::cout << result << '\n';
  return 0;
}

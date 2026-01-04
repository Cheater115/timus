#include <cctype>
#include <iostream>
#include <string>
#include <vector>

class Hieroglyphs {
 public:
  void add(const std::string& h) {
    if (h.size() == 2 && std::islower(h[0]) && std::islower(h[1])) {
      auto first = ordLower(h[0]);
      auto second = ordLower(h[1]);
      table[first][second] = 1;
    }
  }

  std::vector<std::string> find(char start_letter) {
    std::vector<std::string> hieroglyphs;
    if (std::islower(start_letter)) {
      int first = ordLower(start_letter);
      char hierogl[3] = {0};
      hierogl[0] = start_letter;
      for (int second = 0; second < ALPHABET_SIZE; ++second) {
        if (table[first][second] == 1) {
          hierogl[1] = chrLower(second);
          hieroglyphs.emplace_back(hierogl);
        }
      }
    }
    return hieroglyphs;
  }

 private:
  static constexpr int ALPHABET_SIZE = 26;

  char table[ALPHABET_SIZE][ALPHABET_SIZE] = {0};

  static int ordLower(char ch) { return ch - 'a'; }

  static char chrLower(int code) { return 'a' + code; }
};

int main() {
  Hieroglyphs map;
  int count;
  std::cin >> count;
  for (int i = 0; i < count; ++i) {
    std::string symbol;
    std::cin >> symbol;
    map.add(symbol);
  }

  char ch;
  std::cin >> ch;
  auto result = map.find(ch);
  for (auto&& x : result) {
    std::cout << x << '\n';
  }
  return 0;
}

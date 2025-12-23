#include <algorithm>
#include <array>
#include <iostream>
#include <string>

struct Point {
  int x;
  int y;
};

struct Desk {
  static constexpr int SIZE = 8;
  static constexpr int KNIGHT_MOVES = 8;

  static bool isValid(int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE;
  }

  static constexpr std::array<Point, KNIGHT_MOVES> knightMoves = {
      {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}}};
};

void runTest() {
  std::string cell;
  std::cin >> cell;

  Point position{cell[0] - 'a', cell[1] - '1'};
  auto isValidMove = [position](const Point& move) {
    return Desk::isValid(position.x + move.x, position.y + move.y);
  };

  int cnt = std::count_if(Desk::knightMoves.begin(), Desk::knightMoves.end(),
                          isValidMove);
  std::cout << cnt << '\n';
}

int main() {
  int tests;
  std::cin >> tests;
  for (int i = 0; i < tests; ++i) {
    runTest();
  }
  return 0;
}

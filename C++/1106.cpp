#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <queue>
#include <utility>
#include <vector>

class Graph {
  using AdjacencyList = std::vector<std::vector<int>>;

public:
  Graph(std::size_t size) : adjacency_list_(size) {}

  void addEdge(int from, int to) { adjacency_list_[from].push_back(to); }

  std::vector<int> split() const {
    std::vector<int> group;
    std::vector<bool> used(adjacency_list_.size(), false);
    std::queue<std::pair<int, int>> queue;
    int vertexes = static_cast<int>(adjacency_list_.size());
    for (int curr = 0; curr < vertexes; ++curr) {
      if (used[curr]) {
        continue;
      }
      queue.emplace(curr, 0);
      used[curr] = true;
      while (!queue.empty()) {
        auto [vertex, level] = queue.front();
        queue.pop();
        if (level % 2 == 0) {
          group.push_back(vertex);
        }
        for (auto neighbor : adjacency_list_[vertex]) {
          if (!used[neighbor]) {
            queue.emplace(neighbor, level + 1);
            used[neighbor] = true;
          }
        }
      }
    }
    return group;
  }

private:
  AdjacencyList adjacency_list_;
};

int main() {
  std::cin.sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::size_t vertexes;
  std::cin >> vertexes;

  Graph graph(vertexes);
  for (std::size_t i = 0; i < vertexes; ++i) {
    int v = static_cast<int>(i);
    int u;
    while ((std::cin >> u) && (u != 0)) {
      graph.addEdge(v, u - 1);
    }
  }

  auto group = graph.split();
  std::cout << group.size() << '\n';
  std::transform(group.begin(), group.end(),
                 std::ostream_iterator<int>(std::cout, " "),
                 [](int x) { return x + 1; });
  std::cout << '\n';
  return 0;
}

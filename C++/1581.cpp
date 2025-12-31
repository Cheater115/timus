#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

template <class T>
struct Counter {
  std::size_t count;
  T value;
};

template <class T>
std::ostream& operator<<(std::ostream& os, const Counter<T>& counter) {
  os << counter.count << ' ' << counter.value;
  return os;
}

template <class Iterator>
class RLEIterator {
 public:
  using element_type = typename std::iterator_traits<Iterator>::value_type;
  using value_type = Counter<element_type>;
  using reference = const value_type&;
  using pointer = const value_type*;
  using difference_type =
      typename std::iterator_traits<Iterator>::difference_type;
  using iterator_category = std::input_iterator_tag;

  RLEIterator() : current_(), end_(), is_end_(true) {}

  RLEIterator(Iterator begin, Iterator end)
      : current_(begin), end_(end), is_end_(begin == end) {
    if (!is_end_) {
      next();
    }
  }

  reference operator*() const { return node_; }

  pointer operator->() const { return &node_; }

  RLEIterator& operator++() {
    if (!is_end_) {
      next();
    }
    return *this;
  }

  RLEIterator operator++(int) {
    RLEIterator temp = *this;
    ++(*this);
    return temp;
  }

  bool operator==(const RLEIterator& rhs) const {
    if (is_end_ && rhs.is_end_) {
      return true;
    }
    if (is_end_ != rhs.is_end_) {
      return false;
    }
    return current_ == rhs.current_;
  }

  bool operator!=(const RLEIterator& rhs) const { return !(*this == rhs); }

 private:
  Iterator current_;
  Iterator end_;
  bool is_end_;
  value_type node_;

  void next() {
    if (current_ == end_) {
      is_end_ = true;
      return;
    }

    std::size_t count = 0;
    element_type value = *current_;
    Iterator it = current_;
    while (it != end_ && *it == value) {
      ++count;
      ++it;
    }
    node_ = {count, value};
    current_ = it;
  }
};

int main() {
  std::size_t size;
  std::cin >> size;

  std::vector<int> numbers;
  numbers.reserve(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size,
              std::back_insert_iterator<std::vector<int>>(numbers));

  std::copy(RLEIterator(numbers.begin(), numbers.end()),
            RLEIterator(numbers.end(), numbers.end()),
            std::ostream_iterator<Counter<int>>(std::cout, " "));
  std::cout << '\n';
  return 0;
}

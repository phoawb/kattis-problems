#include <iostream>
#include <string>

int main() {
  int x, y, n, i{0};
  std::cin >> x, y, n;
  for (auto &o = std::cout; ++i < (n + 1); o << "\n") {
    i % x ? o : o << "Fizz";
    i % y ? i % x ? o << i : o : o << "Buzz";
  }
  return 0;
}
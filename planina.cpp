#include <iostream>
#include <string>

int main() {
  int points{2};
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    points += points - 1;
  }
  std::cout << points * points << std::endl;
  return 0;
}
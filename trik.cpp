#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string M;
  std::cin >> M;
  std::vector<int> cups{1, 0, 0};
  for (char i : M) {
    if (i == 'A') { std::swap(cups[0], cups[1]);}
    else if ( i == 'B' ) {std::swap(cups[1], cups[2]);}
    else{ std::swap(cups[0], cups[2]); }
  }
  for (int i = 0; i < int(cups.size()); i++) {
    if (cups[i] != 1) continue;
    std::cout << i + 1 << std::endl;
  }
  return 0;
}
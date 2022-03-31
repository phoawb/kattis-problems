#include <iostream>
#include <string>

int main() {
  int x, y;
  std::cin >> x >> y;
  int quadrant{0};
  if (x > 0) quadrant = y > 0 ? 1 : 4;
  else quadrant = y > 0 ? 2 : 3;
  std::cout << quadrant << std::endl;
  return 0;
}
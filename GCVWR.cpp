#include <iostream>

int main() {
  int G, T, N, items{0};
  std::cin >> G >> T >> N;
  for (int i = 0; i < N; i++) {
  int w;
  std::cin >> w;
  items += w;
  }
  std::cout << 0.9*(G - T) - items << std::endl;
  return 0;
}
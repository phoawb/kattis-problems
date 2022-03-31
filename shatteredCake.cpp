#include <iostream>
#include <string>

int main() {
  int area{0}, W, N;
  std::cin >> W;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int wi;
    int li;
    std::cin >> wi >> li;
    area += wi * li;
  }
  std::cout << area / W << std::endl;
  return 0;
}
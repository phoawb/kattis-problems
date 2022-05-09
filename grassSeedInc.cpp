#include <iostream>
#include <string>

int main() {
  float C, cost{0};
  int L;
  std::cin >> C;
  std::cin >> L;
  for (int i = 0; i < L; i++) {
    float w, l;
    std::cin >> w >> l;
    cost += C * (w * l);
  }
  std::cout << std::fixed;
  std::cout.precision(7);
  std::cout << cost << std::endl;
  return 0;
}
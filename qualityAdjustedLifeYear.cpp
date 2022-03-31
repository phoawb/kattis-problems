#include <iostream>
#include <string>
#include <iomanip>

int main() {
  float QALY{0};
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    float q, l;
    std::cin >> q >> l;
    QALY += q * l;
  }
  std::cout << std::fixed << std::setprecision(3) << QALY << std::endl;
  return 0;
}
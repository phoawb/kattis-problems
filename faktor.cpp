#include <iostream>
#include <string>
#include <math.h>


int main() {
  float A, I, bestCase, worstCase, output = 0.0;
  std::cin >> A >> I;
  bestCase = A * (I - 1);
  worstCase = A * I;
  for (int out = bestCase; out < worstCase + 1; out++) {
    if (ceil(out / A) >= I) {
      output = out;
      break;
    }
  }
  std::cout << output << std::endl;
  return 0;
}
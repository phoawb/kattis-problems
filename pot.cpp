#include <iostream>
#include <string>
#include <math.h>

int main() {
  int sum{0};
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::string P;
    std::cin >> P;
    int exp = std::stoi(&P.back());
    P.pop_back();
    sum += pow(std::stoi(P), exp);  
  }
  std::cout << sum << std::endl;
  return 0;
}
#include <iostream>
#include <string>

bool getDigitSum(int digit, int sum) {
  int tot{0};
  std::string number = std::to_string(digit);
  for (int i = 0; i < int(number.length()); i++) {
    std::string tmp;
    tmp = number[i];
    tot += std::stoi(tmp);
  }
  return tot == sum;
}

int findMax(int lowerBound, int upperBound, int sum) {
  int max{0};
  for (int i = upperBound; i >= lowerBound; i--) {
    if(getDigitSum(i, sum)) {max = i; break;};
  }
  return max;
}

int findMin(int lowerBound, int upperBound, int sum) {
  int min{0};
  for (int i = lowerBound; i <= upperBound; i++) {
    if(getDigitSum(i, sum)) {min = i; break;};
  }
  return min;
}



int main() {
  int L, D, X, N, M;
  std::cin >> L;
  std::cin >> D;
  std::cin >> X;
  N = findMin(L, D, X);
  M = findMax(L, D, X);
  std::cout << N << "\n" << M << std::endl;
  return 0;
}
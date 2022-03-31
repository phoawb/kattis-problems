#include <iostream>
#include <string>

int main() {
  int n, k;
  std::cin >> n >> k;
  int predefSum{0};
  for (int i = 0; i < k; i++) {
    int score;
    std::cin >> score;
    predefSum += score;
  }
  float maxScore = ((n - k) * 3.0 + predefSum) / n;
  float minScore = ((n - k) * -3.0 + predefSum) / n;
  std::cout << minScore << " " << maxScore << std::endl;
  return 0;
}
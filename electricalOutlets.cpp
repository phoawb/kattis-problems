#include <iostream>
#include <string>

int main() {
  int N, K;
  std::string output;
  std::cin >> N;
  for(int i = 0; i < N; i++) {
    std::cin >> K;
    int tmp, tot{0};
    for (int j = 0; j < K; j++) {
      std::cin >> tmp;
      tot += tmp;
    }
    output += std::to_string(tot - K + 1) + "\n";
  }
  std::cout << output << std::endl;
  return 0;
}
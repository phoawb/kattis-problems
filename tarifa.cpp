#include <iostream>
#include <string>

int main() {
  int X, N;
  int data{0};
  std::cin >> X;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::string P;
    std::cin >> P;
    data += X - std::stoi(P);
  }
  std::cout << data + X << std::endl;
  return 0;
}
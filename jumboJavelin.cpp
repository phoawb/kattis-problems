#include <iostream>
#include <string>

int main() {
  int length{0};
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int l;
    std::cin >> l;
    length += l;
  }
  std::cout << length - (N - 1) << std::endl;
  return 0;
}
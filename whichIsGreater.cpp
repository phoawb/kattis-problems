#include <iostream>
#include <string>

int main() {
  int a, b;
  int output{0};
  std::cin >> a >> b;
  if (a > b) output = 1;
  std::cout << output << std::endl;
  return 0;
}
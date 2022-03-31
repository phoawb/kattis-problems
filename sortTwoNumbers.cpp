#include <iostream>
#include <string>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::string output = std::to_string(a) + " " + std::to_string(b);
  if (a > b) output = std::to_string(b) + " " + std::to_string(a);
  std::cout << output << std::endl;
  return 0;
}
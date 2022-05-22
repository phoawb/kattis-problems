#include <iostream>
#include <algorithm>
#include <string>

int main() {
  std::string digit;
  std::cin >> digit;
  std::reverse(digit.begin(), digit.end());
  std::cout << digit << std::endl;
  return 0;
}
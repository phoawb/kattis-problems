#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string A, B, output;
  std::cin >> A >> B;
  std::reverse(A.begin(), A.end());
  std::reverse(B.begin(), B.end());
  output = std::stoi(A) > std::stoi(B) ? A : B;
  std::cout << output << std::endl;
  return 0;
}
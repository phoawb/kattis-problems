#include <iostream>
#include <string>

int main() {
  float a;
  std::cin >> a;
  std::cout << (1.0 + (100.0 - a) / a) << "\n" << (1.0 + a / (100.0 - a)) << std::endl;
  return 0 ;
}
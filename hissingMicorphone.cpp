#include <iostream>
#include <string>

int main() {
  std::string line;
  std::cin >> line;
  std::string output = line.find("ss") != std::string::npos ? "hiss" : "no hiss"; 
  std::cout << output << std::endl;
  return 0;
}
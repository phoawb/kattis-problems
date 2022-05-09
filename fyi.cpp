#include <iostream>
#include <string>

int main() {
  std::string n;
  std::cin >> n;
  bool output = n.substr(0, 3) == "555";
  std::cout << output << std::endl;
  return 0;
}
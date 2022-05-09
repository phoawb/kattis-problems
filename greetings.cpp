#include <iostream>
#include <string>

int main () {
  std::string hey;
  std::cin >> hey;
  std::string e = hey.erase(0, 1).substr(0, hey.size()-1);
  std::cout << "h" << e << e << "y" << std::endl;
  return 0;
}
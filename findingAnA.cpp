#include <iostream>
#include <string>

int main() {
  std::string s, output;
  std::cin >> s;
  output = s.substr(s.find('a'));
  std::cout << output << std::endl;
  return 0;
}
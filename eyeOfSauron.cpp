#include <iostream>
#include <string>

int main() {
  std::string sauron, output{"fix"};
  std::cin >> sauron;
  int index{static_cast<int>(sauron.find('('))};
  if( (index) == (static_cast<int>(sauron.length() - index - 2))) output = "correct";
  std::cout << output << std::endl;
  return 0;
}
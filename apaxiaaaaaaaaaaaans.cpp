#include <iostream>
#include <string>

int main() {
  std::string name, out;
  std::cin >> name;
  for(int i = 0; i < int(name.length()); i++) {
    if (name[i] != name[i + 1]) out += name[i];
  }
  std::cout << out << std::endl;
  return 0;
}
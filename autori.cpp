#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::string autori; 
  std::cin >> autori;
  if (autori.length() > 100) throw std::invalid_argument("string must be max 100 chars long!");
  std::stringstream ss(autori);
  std::string token;
  while (std::getline(ss, token, '-')) {
    std::cout << token[0];
  }
  return 0; 
}
#include <iostream>
#include <string>

int main() {
  std::string smil, out{""};
  std::cin >> smil;
  for (int i = 0; i < int(smil.length()); i++) {
    if (smil[i] != ':' && smil[i] != ';') continue;
    if (smil[i + 1] == ')') {out += std::to_string(i) + "\n"; i += 1; continue;}
    if (smil[i + 1] != '-') continue;
    if (smil[i + 2] == ')') out += std::to_string(i) + "\n"; i += 2;
  }
  std::cout << out << std::endl;
  return 0;
}
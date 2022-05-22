#include <iostream>
#include <string>

int main() {
  int v{7};
  std::string n;
  getline(std::cin, n);
  for (int i = 0; i < std::stoi(n); i++) {
    std::string k;
    getline(std::cin, k);
    if (k == "Skru op!") {v = v != 10 ? v + 1 : v;}
    else{ v = v != 0 ? v - 1 : v;};
  }
  std::cout << v << std::endl;
  return 0;
}
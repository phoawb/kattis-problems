#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> set{1, 1, 2, 2, 2, 8};
  std::string out{""};
  for(int i : set) {
    int p;
    std::cin >> p;
    out += std::to_string(i - p) + " ";
  }
  std::cout << out << std::endl;
  return 0;
}
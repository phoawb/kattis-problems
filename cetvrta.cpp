#include <iostream>
#include <string>
#include <map>

int main() {
  std::string out{""};
  std::map<int, int> xmem{};
  std::map<int, int> ymem{};
  for(int i = 0; i < 3; i++) {
    int x, y;
    std::cin >> x >> y;
    if(xmem.find(x) == xmem.end()) {xmem[x] = 1;}
    else{xmem[x] += 1;};
    if(ymem.find(y) == ymem.end()) {ymem[y] = 1;}
    else{ymem[y] += 1;};
  }
  for (auto const& [key, val] : xmem) {
    if(val == 1) {
      out += std::to_string(key) + " ";
      break;
    }
  }
  for (auto const& [key, val] : ymem) {
    if(val == 1) {
      out += std::to_string(key);
      break;
    }
  }
  std::cout << out << std::endl;
  return 0;
}
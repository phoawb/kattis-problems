#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::string s;
  std::cin >> s;
  std::unordered_map<char, int> m;
  for (char c : s) {
    m[c]++;
  }
  bool result{1};
  for (auto it : m) {
    if (m[it.first] > 1) {
      result = 0;
      break;
    }
  }
  std::cout << result << std::endl;
  return 0;
}
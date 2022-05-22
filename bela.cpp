#include <iostream>
#include <string>
#include <map>

int main() {
  std::map<char, int> domMap{{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}};
  std::map<char, int> subMap{{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}};
  int N, out{0};
  char S;
  std::cin >> N >> S;
  for (int i = 0; i < 4 * N; i++) {
    std::string hand;
    std::cin >> hand;
    out += hand[1] == S ? domMap[hand[0]] : subMap[hand[0]];
  }
  std::cout << out << std::endl;
  return 0;
}
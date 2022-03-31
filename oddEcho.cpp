#include <iostream>
#include <string>

int main() {
  int N;
  std::string output{""};
  std::cin >> N;
  for (int i = 1; i <= N + 1; i++) {
    std::string input;
    getline(std::cin, input);
    if (!(i % 2)) output += input + "\n";
  }
  std::cout << output << std::endl;
  return 0;
}
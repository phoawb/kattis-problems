#include <iostream>
#include <string>

int main() {
  int N;
  std::string name{"Alice"};
  std::cin >> N;
  if (!(N % 2)) name = "Bob";
  std::cout << name << std::endl;
  return 0;
}
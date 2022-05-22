#include <iostream>

int main() {
  int b, tot{0}, i{1}, h{0}; 
  std::cin >> b;
  while(tot <= b) {
    tot += i * i;
    i += 2;
    h += 1;
  }
  std::cout << h - 1 << std::endl;
  return 0;
}
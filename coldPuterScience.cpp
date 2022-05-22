#include <iostream>

int main() {
  int n, t, out{0};
  std::cin >> n;
  for(int i = 0; i < n; i++) {
    std::cin >> t;
    if(t < 0) out += 1;
  }
  std::cout << out << std::endl;
  return 0;
}
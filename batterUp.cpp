#include <iostream>
#include <string>

int main() {
  int n;
  float out{0}, score{0};
  std::cin >> n;
  int count{n};
  for (int i = 0; i < n; i++) {
    float b;
    std::cin >> b;
    if(b != -1) {score += b;}
    else{count -= 1;};
  }
  out = score / count;
  std::cout << out << std::endl;
  return 0;
}
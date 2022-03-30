#include <iostream>


void checkError(const int n, const int t, const int m){
  if (n < 1 || n > 500 || t < 1 || t > 500 || m < 1 || m > 500) throw std::invalid_argument("Arguments must be between 1 & 500!");
}

int main() {
  int n, t, m;
  std::cin >> n >> t >> m;
  checkError(n, t, m);
  std::cout << n*t*m << std::endl;
  return 0;
}
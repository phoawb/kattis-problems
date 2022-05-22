#include <iostream>
#include <string>

int sum(int end) {
  int tot{0};
  for (int i = 1; i <= end; i++) {
    tot += i;
  }
  tot += end;
  return tot;
}

int main() {
  int n;
  std::string out{""};
  std::cin >> n;
  for(int i = 0; i < n; i++) {
    int K, N;
    std::cin >> K >> N;
    out += std::to_string(K) + " " + std::to_string(sum(N)) + "\n";
  }
  std::cout << out << std::endl;
  return 0;
}
#include <iostream>
#include <string>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> results;
  for (int i = 0; i < n; i++) {
    int r, e, c;
    std::cin >> r >> e >> c;
    results.push_back(e - c - r );
  }
  for (int result : results) {
    std::string output{"does not matter"};
    if (result > 0) output = "advertise";
    else if (result < 0) output = "do not advertise";
    std::cout << output << std::endl;
  }
  return 0;
}
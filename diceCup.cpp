#include <iostream>
#include <string>

int main() {
  int N, M;
  std::string out;
  std::cin >> N >> M;
  int diff{N - M}, count{M};
  if (diff < 0) { diff = M - N; count = N;};
  for (int i = 0; i < (diff + 1); i++) {
    count += 1;
    out += std::to_string(count) + "\n";
  }
  std::cout << out << std::endl;
  return 0;
}
#include <iostream>
#include <string>
#include <vector>

void vectorPushLoop(std::vector<int> & v, int n) {
  for (int i = 0; i < n; i++) {
  int vi;
  std::cin >> vi;
  v.push_back(vi);
  } 
}

int waitTime(int curr, int cycle) {
  int wait = cycle - curr;
  while (wait < 0) {
    wait += cycle;
  }
  return wait;
}

int main() {
  int s, t, n, tot{0};
  std::string output{"yes"};
  std::vector<int> d{};
  std::vector<int> b{};
  std::vector<int> c{};
  std::cin >> s >> t >> n;
  vectorPushLoop(d, n + 1);
  vectorPushLoop(b, n);
  vectorPushLoop(c, n);
  for (int i = 0; i < n; i++) {
    tot += d[i];
    tot += waitTime(tot, c[i]);
    tot += b[i];
  }
  tot += d[n];
  if (tot > t) output = "no";
  std::cout << output << std::endl;
  return 0;
}
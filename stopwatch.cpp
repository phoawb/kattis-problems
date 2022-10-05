#include <iostream>
#include <string>

void toggleWatch(bool & active) {
  if(!active) active = true;
  else active = false;
}

int getTime(int N) {
  int mem{0}, t{0};
  bool active{false};
  for (int i = 0; i < N; i++) {
    int time;
    std::cin >> time;
    if(active) t += time - mem;
    mem = time;
    toggleWatch(active);
  }
  return t;
}

int main() {
  int N;
  std::cin >> N;
  std::string output;
  if(N % 2 != 0) std::cout << "still running" << std::endl;
  else std::cout << getTime(N) << std::endl;
  return 0;
}
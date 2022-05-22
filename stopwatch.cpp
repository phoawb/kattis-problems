#include <iostream>
#include <string>

void toggleWatch(bool & active) {
  if(!active) active = true;
  else active = false;
}

int main() {
  int N, t{0}, mem{0};
  std::cin >> N;
  std::string output;
  bool active;
  for (int i = 0; i < N; i++) {
    int time;
    std::cin >> time;
    if(active) t += time - mem;
    mem = time;
    toggleWatch(active);
  }
  output = active ? "still running" : std::to_string(t);
  std::cout << output << std::endl;
  return 0;
}
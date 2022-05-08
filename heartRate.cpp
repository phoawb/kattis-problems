#include <iostream>
#include <vector>

int main() {
  int N; 
  std::cin >> N;
  std::vector<float> bpmArray;
  std::vector<float> abpmArray;
  for (int i = 0; i < N; i++){
    float b, p;
    std::cin >> b >> p;
    float bpm = 60.0 * (b / p); 
    bpmArray.push_back(bpm);
    float abpm = 60 / p;
    abpmArray.push_back(abpm);
  }
  for (int i = 0; i < N; i++) {
    std::cout << std::fixed;
    std::cout.precision(4);
    std::cout << bpmArray[i] - abpmArray[i] << " " << bpmArray[i] << " " << bpmArray[i] + abpmArray[i] << std::endl;
  }
  return 0;
}
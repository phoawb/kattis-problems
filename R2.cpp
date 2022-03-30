#include <iostream>

int main(){
  int R1, S;
  std::cin >> R1 >> S;
  if (R1 < -1000 || R1 > 1000 || S < -1000 || S > 1000) throw std::invalid_argument("arguments must be between -1000 & 1000!");
  int R2 = 2*S - R1;
  std::cout << R2 << std::endl;
  return 0; 
}
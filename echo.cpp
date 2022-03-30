#include <iostream>
#include <string>

int main() {
  std::string word;
  std::cin >> word; 
  if (word.length() < 1 || word.length() > 15) throw std::invalid_argument("character count must be between 1 & 15!");
  for (int i = 0; i < 3; i++) {
    std::cout << word << " "; 
  }
  return 0;
}
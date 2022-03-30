#include <iostream>
#include <string>

int main()
{
  int x, y;
  std::string line;
  std::cin >> x >> y;
  if (x < 1 || y < 1 || x > 1000 || y > 1000) throw std::invalid_argument("inputs must be between 1 & 1000!");
  for (int i = 0; i <= x; i++) 
  {
    getline(std::cin, line);
  }
  std::cout << y << std::endl;
  return 0;
}
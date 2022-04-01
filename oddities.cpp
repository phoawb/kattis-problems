#include <iostream>
#include <string>
#include <vector>



int main() {
  int n;
  std::vector<int> numbers;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    numbers.push_back(x);
  }
  for (int number : numbers) {
    std::string output{" is even"};
    if (number % 2 ) output = " is odd";
    std::cout << number << output << std::endl;
  }
  return 0;
}
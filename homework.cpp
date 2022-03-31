#include <iostream>
#include <string>
#include <sstream>
#include <vector>


std::vector<std::string> splitString(const std::string str, const char delim) {
  std::stringstream ss(str);
  std::string token; 
  std::vector<std::string> splittedString;
  while (getline(ss, token, delim)) {
    splittedString.push_back(token);
  } 
  return splittedString;
}

int main() {
  int sum{0};
  std::string problems;
  std::cin >> problems;
  std::vector<std::string> splitted = splitString(problems, ';');
  for (const std::string& value: splitted) {
    if (value.find('-') != std::string::npos) {
      std::vector<std::string> ints = splitString(value, '-');
      int n1 = std::stoi(ints[0]);
      int n2 = std::stoi(ints[1]);
      sum += n2 - n1;
    }
    sum++;
  }
  std::cout << sum << std::endl;
  return 0;
}
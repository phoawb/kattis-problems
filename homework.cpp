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

void printSum(std::string problems) {
  int sum{0};
  std::vector<std::string> nums = splitString(problems, ';');
  for (std::vector<std::string>::iterator it = nums.begin(); it != nums.end(); it++) {
    if ((*it).length() == 1) {
      sum += 1;
    }
    else {
      std::vector<std::string> strVector = splitString(*it, '-');
      int n1 = std::stoi(strVector[0]);
      int n2 = std::stoi(strVector[1]);
      sum += n2 - n1 + 1; 
    }
  }
  std::cout << sum << std::endl;
}

int main() {
  std::string problems;
  std::cin >> problems;
  printSum(problems);
  return 0;
}
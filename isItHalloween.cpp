#include <iostream>
#include <string>

int main() {
  std::string date;
  std::getline(std::cin, date);
  std::string output = date == "OCT 31" ? "yup" : date == "DEC 25" ? "yup" : "nope";
  std::cout << output << std::endl;
  return 0; 
}

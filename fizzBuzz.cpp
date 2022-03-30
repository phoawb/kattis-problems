#include <iostream>
#include <string>

// this can be further improved by storing the keys 
// in a hashmap and iterating over that
void fizzBuzz(){
  for (int i = 1; i < 101; i++) {
    std::string output{""};
    if (i % 3 == 0) {output += "fizz";}
    if (i % 5 == 0) {output += "buzz";}
    if (output == "") {output = std::to_string(i);}
    std::cout << output << std::endl;
  }
}

int main() {
  fizzBuzz();
  return 0;
}
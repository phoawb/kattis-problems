#include <iostream>
#include <string>
#include <cmath>

float degrees2radians(float degrees) {
  float pi = 3.141592653589793238462643383279502884197169399375105820974944;
  return degrees * pi / 180.0;
}

float xTime(float v, float r, float x1) {
  return x1 / (cos(r) * v);
}

float yHeight(float v, float t, float r) {
  float g = 9.81;
  return v * t * sin(r) - 0.5 * t * t * g;
}

int main() {
  int n;
  std::string output{""};
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    float v, o, x1, h1, h2;
    std::cin >> v >> o >> x1 >> h1 >> h2;
    float r = degrees2radians(o);
    float t = xTime(v, r, x1);
    float h = yHeight(v, t, r);
    if ((h2 - h) < 1.0 || (h - h1) < 1.0) { output += "Not Safe\n"; }
    else{ output += "Safe\n"; };
  }
  std::cout << output << std::endl;
  return 0;
}
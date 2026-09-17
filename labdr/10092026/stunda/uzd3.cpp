#include <iostream>
using namespace std;

float f(float x) {
  if (x < -2) {
    return 0;
  } else if (-2 <= x && x <= -1) {
    return -x - 2;
  } else if (-1 < x && x < 1) {
    return x;
  } else if (1 <= x && x < 2) {
    return -x + 2;
  } else if (x >= 2) {
    return 0;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  float x;
  cout << "ievadi x==>";
  cin >> x;
  cout << f(x);
  return 0;
}

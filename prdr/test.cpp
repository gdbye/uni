#include <iostream>
using namespace std;

int *liel(int *x, int *y) {
  if (*x > *y) {
    return x;
  } else {
    return y;
  }
}

int main() {
  int x = 5;
  int y = 8;

  cout << *liel(&x, &y);
}

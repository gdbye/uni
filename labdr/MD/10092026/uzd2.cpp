#include <cmath>
#include <iostream>
using namespace std;

int digit_sum(int x) {
  int sum = 0;

  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }

  return sum;
}

void test(int x_digit, int x, int y, int z) {
  if (x_digit == abs(y - z))
    cout << x;
}

int main() {
  int x, y, z;

  cout << "Ievadi x==>";
  cin >> x;

  cout << "Ievadi y==>";
  cin >> y;

  cout << "Ievadi z==>";
  cin >> z;

  int x_digit = digit_sum(x);
  int y_digit = digit_sum(y);
  int z_digit = digit_sum(z);

  test(x_digit, x, y, z);
  test(y_digit, y, x, z);
  test(z_digit, z, x, y);

  return 0;
}

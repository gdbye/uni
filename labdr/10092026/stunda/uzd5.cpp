#include <iostream>
using namespace std;

bool lucky(int x, int y, int z) {
  if (x % 100 == 21) {
    return 1;
  } else if (y % 100 == 21) {
    return 1;
  } else if (z % 100 == 21) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char *argv[]) {
  int x, y, z;

  cout << "ievadi x==>";
  cin >> x;

  cout << "ievadi y==>";
  cin >> y;

  cout << "ievadi z==>";
  cin >> z;

  if (lucky(x, y, z)) {
    cout << "Jā";
  } else {
    cout << "Nē";
  }

  return 0;
}

#include <iostream>
int main(int argc, char *argv[]) {
  int n;

  std ::cout << "ievadi n \n ";
  std ::cin >> n;

  for (int y = 1; y <= n; y++) {
    if (n % (y * y) == 0) {
      std ::cout << y;
      std ::cout << "\n";
    }
  }

  return 0;
}

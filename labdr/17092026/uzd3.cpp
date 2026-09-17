#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cout << "Ievadi n==>";
  cin >> n;
  string x = "*";
  for (int i = 0; i < n; i++) {
    cout << x << "\n";
    x += "*";
  }
  return 0;
}

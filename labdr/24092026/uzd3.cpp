#include <iostream>
using namespace std;
/*

*/
int input(string jaut) {
  int x;
  // Atkārto ievadi līdz ievada naturālu skaitli.
  while (true) {
    cout << jaut;
    cin >> x;

    // Ja ir naturāls skaitlis iziet no cikla un turpina programmu.
    if (x > 0) {
      break;
    } else {
      cout << "Ievadi naturālu skaitli";
    }
  }
  return x;
}

int main() {
  int n;

  return 0;
}

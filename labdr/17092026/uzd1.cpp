// uzd1.cpp
/*****************************
  Sastādīt C++ programmu,
  kas pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību.
*****************************/
// Programmas autors Jānis Bašēns
// Izveidota 17.09.2026.

#include <iostream>
using namespace std;

int main() {
  int n, x;
  int biggest = 0;

  cout << "Cik skaitļus vēlāties ievadīt ==>";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "Ievadi " << i << ". skaitli ==>";
    cin >> x;

    if (i == 1) {
      biggest = n;
    }

    if (biggest < x) {
      biggest = x;
    }
  }

  cout << biggest << "<==Lielākais\n";
  return 0;
}

/***********************************************
    Ievade    |   Paredzamais rezultāts
    -1 5 12   |           12
    12 12 122 |          122
    1 3 123   |          123
***********************************************/

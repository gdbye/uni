#include <iostream>
using namespace std;
/**********************
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti. Programma izveidota 08.09.2026.
Programma izveidota 08.09.2026.
**********************/

int main() {
  int n;
  bool repeat = true;
  while (repeat) {
    // Pārbauda vai ievada naturālu skaitli
    do {
      cout << "Ievadiet naturālu skaitli(n>=1)==> ";
      cin >> n;
      if (n < 1)
        cout << "Neder, ievadi naturālu skaitli";
    } while (n < 1);

    // Iet cauri katram skaitlim no 1 līdz n un pārbauda.
    for (int i = 1; i <= n; i++) {
      if (n % (i * i) == 0) {
        std ::cout << i;
        std ::cout << "\n";
      }
    }

    cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    cin >> repeat;
  }
  return 0;
}

/********************************
  ievade       |      paredzamais rezultāts
------------------------------
      36       |      1 2 3 6
      25       |      1 5
      66       |      1
      -30      |      Neder, ievadi naturālu skaitli
      0        |      Neder, ievadi naturālu skaitli
*********************************/

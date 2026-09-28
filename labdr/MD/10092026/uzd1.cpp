#include <iostream>

/**********************
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti. Programma izveidota 08.09.2026.
Programma izveidota 08.09.2026.
**********************/

int main() {
  int n;
  bool x = true;
  bool x2 = true;

  while (x) {
    // Atkārto ievadi līdz ievada naturālu skaitli.
    while (x2) {
      std ::cout << "ievadi n==>";
      std ::cin >> n;

      // Ja ir naturāls skaitlis iziet no cikla un turpina programmu.
      if (n > 0) {
        x2 = false;
      } else {
        std ::cout << "Ievadi naturālu skaitli\n";
      }
    }

    // Iet cauri katram skaitlim no 1 līdz n un pārbauda.
    for (int i = 1; i <= n; i++) {
      if (n % (i * i) == 0) {
        std ::cout << i;
        std ::cout << "\n";
      }
    }

    std::cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    std::cin >> x;
  }
  return 0;
}

/********************************
  ievade       |      paredzamais rezultāts
------------------------------
      36       |      1 2 3 6
      25       |      1 5
      66       |      1
      -30      |      Ievadi naturālu skaitli
      0        |      Ievadi naturālu skaitli
*********************************/

#include <iostream>

/**********************
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti. Programma izveidota 08.09.2026.
Programma izveidota 08.09.2026.
**********************/

int main() {
  int n;
  bool repeat = true;
  bool isTrue = true;

  while (repeat) {
    // Atkārto ievadi līdz ievada naturālu skaitli.
    while (isTrue) {
      std ::cout << "ievadi n==>";
      std ::cin >> n;

      // Ja ir naturāls skaitlis iziet no cikla un turpina programmu.
      if (n > 0) {
        isTrue = false;
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
    isTrue = true;
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

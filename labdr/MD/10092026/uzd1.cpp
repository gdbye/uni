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

  while (x) {
    std ::cout << "ievadi n==>";
    std ::cin >> n;

    // Iet cauri katram skaitlim no 1 līdz n un pārbauda.
    for (int y = 1; y <= n; y++) {
      if (n % (y * y) == 0) {
        std ::cout << y;
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
      -30      |
      0        |
*********************************/

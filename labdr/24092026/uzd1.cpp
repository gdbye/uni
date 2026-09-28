#include <iostream>
using namespace std;
/*
Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un nosaka
garākās stingri augošas virknes garumu. Jābūt iespējai programmu izpildīt
atkārtoti, neizejot no programmas.
Autors: Jānis Bašēns
Programma izgatabota: 24.09.2026.
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
  int x, last;
  int repeat = 1;

  int garums = 1;
  int maxGarums = 1;

  while (repeat) {
    n = input("Ievadi cik daudz skaitļus taisies ievadīt==>");

    for (int i = 0; i < n; i++) {
      x = input("Ievadi virknes skaitli==>");

      if (i == 0) {
        last = x;
        continue;
      }

      if (last < x) {
        garums++;
      } else {
        garums = 1;
      }

      if (garums > maxGarums) {
        maxGarums = garums;
      }

      last = x;
    }
    cout << "max garums==" << maxGarums << endl;

    cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    cin >> repeat;
  }

  return 0;
}

/****************************
Testa plāns

Ievade          |       Izvade
________________|__________________
5               |
1, 3, 5, 1, 4   |         3
________________|__________________
-7              | Ievadi naturālu skaitli
6               |
1, 2, 3, 5, 2, 3|         4
************************/

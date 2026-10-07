#include <iostream>
#include <istream>
using namespace std;
/***********************************
AuPLa0501. Sastādīt C++ programmu, kas dotam naturālam skaitlim nosaka dota
cipara skaitu pierakstā. Risinājuma iegūšanai sastādīt funkciju, kura naturālam
skaitlim nosaka dota cipara skaitu pierakstā. Jābūt iespējai programmu izpildīt
atkārtoti, neizejot no programmas.

Izgatavots 01/10/2026
Izgatavoja Jānis Bašēns
**********************************/

/********************************
int dcskaits(int n, int cip);
funkcija dcskaits(n, cip)
  atgriež kā rezultātu
  naturāla skaitļa n pierakstā
  sastopamā cipara cip skaitu
*******************************/

int dcskaits(int n, int cip) {
  int skaits = 0;
  int digit;

  while (n > 0) {
    digit = n % 10;
    if (digit == cip) {
      skaits++;
    }
  }

  return skaits;
}

/*********************
funkcija input(string jautajums)
  Prasa ievadi
  atgriež rezultātu ja ir naturāls
**********************/

int input(string jautajums) {
  int x;
  bool isTrue = true;
  // Atkārto ievadi līdz ievada naturālu skaitli.
  while (isTrue) {
    cout << jautajums;
    cin >> x;

    // Ja ir naturāls skaitlis iziet no cikla un turpina programmu.
    if (x > 0) {
      isTrue = false;
    } else {
      cout << "Ievadi naturālu skaitli";
    }
  }

  return x;
}

/********************************
funkcija input_cip()
  Prasa ievadīt ciparu
  Atgriež vērtību ja ir ievadīts cipars
*********************************/

int input_cip() {
  int x;
  bool isTrue = true;
  // Atkārto ievadi līdz ievada ciparu.
  while (isTrue) {
    cout << "Ievadi ciparu==>";
    cin >> x;

    // Ja ir cipars iziet no cikla un turpina programmu.
    if (0 <= x || x <= 9) {
      isTrue = false;
    } else {
      cout << "Ievadi ciparu skaitli";
    }
  }

  return x;
}

int main() {
  bool repeat = true;

  while (repeat) {
    cout << "Atkārtojas"
         << dcskaits(input("Ievadi naturālu skaitli==>"), input_cip())
         << "reizes";

    cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    cin >> repeat;
  }

  return 0;
}

/***********************************



************************************/

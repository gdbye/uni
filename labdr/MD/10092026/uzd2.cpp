#include <cmath>
#include <iostream>
using namespace std;

/**********************
Jānis Bašēns, jb26076
B8. Doti trīs naturāli skaitļi. Noteikt, vai starp dotajiem skaitļiem ir tāds,
kura ciparu summa ir vienāda ar pārējo divu skaitļu starpību. Ja ir, izdrukāt šo
skaitli. Skaitļu dalīšana ciparos jāveic skaitliski. Risinājumā izmantot
funkciju, kas aprēķina skaitļa ciparu summu.
Programma izveidota 08.09.2026.
**********************/

/**************************
int digit_sum(int x);
funkcija digit_sum(x)
  Saskaita dotā naturālā skaitļa ciparu summu
  un to atgriež
***************************/
int digit_sum(int x) {
  int sum = 0;

  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }

  return sum;
}

/**************************************
int input();
Funkija input()
  Prasa ievadīt naturālu skaitli
  Pārbauda vai ir naturāls skaitliski
  Ja nav tad atkārtoti prasa ievadi
  Ja ir tad atgriež ievadīto skaitli
**************************************/
int input() {
  int n;
  do {
    cout << "Ievadiet naturālu skaitli n, n>=1==>" << endl;
    cin >> n;
    if (n < 1)
      cout << "Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1." << endl;
  } while (n < 1);

  return n;
}

/********************************
void test(int x_digit, int x, int y, int z);
Funkcija test(x_digit, x, y, z)
  Pārbauda uzdevuma nosacījumus
  Ja piepildās izprintē x
  Ja nepiepildās neko neizprintē
********************************/
void test(int x_digit, int x, int y, int z) {
  if (x_digit == abs(y - z))
    cout << x << "\n";
}

int main() {
  int x, y, z;
  bool repeat = true;
  int x_digit, y_digit, z_digit;

  while (repeat) {
    // Ievada naturālos skaitļus.
    x = input();
    y = input();
    z = input();

    // Saskaita katram ievadītam naturālam skaitlim ciparu summu.
    x_digit = digit_sum(x);
    y_digit = digit_sum(y);
    z_digit = digit_sum(z);

    // Pārbauda uzdevuma nosacījumu.
    test(x_digit, x, y, z);
    test(y_digit, y, x, z);
    test(z_digit, z, x, y);

    cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    cin >> repeat;
  }
  return 0;
}

/******************************
  ievade       |      paredzamais rezultaāts
------------------------------
    12 25 20   |
    15 20 23   |      23
    12 20 23   |      12
  -12 12 25 20 | Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1.
*******************************/

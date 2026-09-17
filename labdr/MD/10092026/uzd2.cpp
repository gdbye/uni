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

// Saskaita skaitļa ciparu summu
int digit_sum(int x) {
  int sum = 0;

  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }

  return sum;
}

// Pārbauda vai ir patiess un izprintē to ja iznākums ir derīgs
void test(int x_digit, int x, int y, int z) {
  if (x_digit == abs(y - z))
    cout << x << "\n";
}

int main() {
  int x, y, z;
  bool n = true;
  int x_digit, y_digit, z_digit;

  while (n) {
    cout << "Ievadi x==>";
    cin >> x;

    cout << "Ievadi y==>";
    cin >> y;

    cout << "Ievadi z==>";
    cin >> z;

    x_digit = digit_sum(x);
    y_digit = digit_sum(y);
    z_digit = digit_sum(z);

    test(x_digit, x, y, z);
    test(y_digit, y, x, z);
    test(z_digit, z, x, y);

    cout << "vai vēlies vēlreiz? \n1 == Jā | 0 == Nē \n==>";
    cin >> n;
  }
  return 0;
}

/******************************
  ievade       |      paredzamais rezultaāts
------------------------------
    12 25 20   |
    15 20 23   |      23
    12 20 23   |      12
*******************************/

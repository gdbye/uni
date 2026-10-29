#include <iostream>
using namespace std;

/*********************
AuPLa0901. Izveidot C++ programmu, kas ievada N naturālus skaitļus, saglabā
skaitļus gan statiskā masīvā, gan dinamiskā masīvā un aprēķina skaitļu mediānu.
Mediāna ir skaitlis, kas sadala kādu sakārtotu skaitļu kopu divās daļās. Galīga
skaitļu saraksta mediānu var atrast, sakārtojot sarakstu augošā secībā, mediāna
ir vidējā vērtība, piemēram, (3, 3, 5, 9, 11) mediāna ir 5. Ja sarakstā ir pāra
skaits elementu, tad mediānu iegūst kā sakārtota skaitļu saraksta divu vidējo
elementu summas pusi, piemēram, (3, 5, 8, 9) mediāna ir (5 + 8)/ 2 = 6.5.
Mediānas aprēķināšanai izveidot funkciju.
Var pieņemt, ka skaitļi tiek ievadīti augošā kārtībā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

programmu izveidoja: Jānis Bašēns
programma izveidota: 29/10/2026
*********************/

/**************************************
int input();
Funkija input()
  Prasa ievadīt naturālu skaitli
  Pārbauda, vai ir naturāls skaitliski
  Ja nav, tad atkārtoti prasa ievadi
  Ja ir, tad atgriež ievadīto skaitli
**************************************/
int input(string jaut) {
  int n;
  do {
    cout << jaut << " Ievadiet naturālu skaitli n, n>=1==>";
    cin >> n;
    if (n < 1) {
      cout << "Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1." << endl;
    }
  } while (n < 1);

  return n;
}

float mediana(int Nmax, int mas[]) {
  if (Nmax % 2) {
  }
  return 0;
}

int main() {
  bool ok = true;
  int n, Nmax;
  int *dmas;
  float med;

  Nmax = input("Ievadi masīva izmēru?");
  int mas[Nmax];

  do {
    int *dmas = new int[Nmax];

    for (int i = 0; i < Nmax; i++) {
      n = input("Ievadi masīva elementu.");
      mas[i] = n;
      dmas[i] = n;
    }

    delete[] dmas;
  } while (ok);

  return 0;
}

#include <iostream>
using namespace std;

/*******************************
AuPLa0801. Sastādīt C++ funkciju getNatural(), kas atgriež kā rezultātu korektu
naturālu skaitli. Skaitļa vērtību pieprasa ievadīt lietotājam tik ilgi, kamēr
ievada korektu vērtību – vērtība lielāka par nulli. Sastādīt arī programmu, kurā
tiek izsaukta funkcija getNatural.

programmu izveidoja: Jānis Bašēns
programma izveidota: 22/10/2026
********************************/

/**************************************
int getNatural();
Funkija getNatural()
  Prasa ievadīt naturālu skaitli
  Pārbauda, vai ir naturāls skaitliski
  Ja nav, tad atkārtoti prasa ievadi
  Ja ir, tad atgriež ievadīto skaitli
**************************************/

int getNatural() {
  int n;
  do {
    cout << "Ievadiet naturālu skaitli >=1==>";
    cin >> n;
    if (n < 1) {
      cout << "Kļūdaina vērtība. Jāievada naturalu skaitli >=1." << endl;
    }
  } while (n < 1);

  return n;
}

int main() {
  cout << getNatural();
  return 0;
}

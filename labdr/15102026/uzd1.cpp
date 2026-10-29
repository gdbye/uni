#include <iostream>
using namespace std;

/**********************
AuPLa0701. Sastādīt C++ programmu, kas ļauj noskaidrot, cik reizes teksta
rindiņā ir sastopams konkrēts simbols. Gan teksta rindiņu, gan simbolu ievada
lietotājs. Teksta rindiņa jāsaglabā programmā kā zema līmeņa simbolu virkne.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
programmu veidoja Jānis Bašēns
programmu izveidoja 15/10/2026
 *******************/

int main(int argc, char *argv[]) {
  int count = 0;

  // Ievada simbolu virkni
  char str[51];
  cout << "Ievadi līdz 50 zīmēm==>";
  cin.getline(str, 51);

  // Ievada simbolu ko meklēt
  cout << "Ievadi simbolu ko meklēt==>";
  char x;
  cin.get(x);

  // meklē simbolu, simbolu virknē
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == x) {
      count++;
    }
  }

  cout << count;
  return 0;
}

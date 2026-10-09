#include <iostream>
using namespace std;
/***************************************
  Jānis Bašēns, jb26076
  AuPLa0601. Sastādīt C++ programmu, kurā lietotājs ievada veselu skaitļu
  masīvu. Skaitļu skaitu uzdod lietotājs. Pēc ievada jāizdrukā masīva lielākā
  elementa vērtība un visas atrašanās vietas. Visas atrašanās vietas jāsaglabā
  citā masīvā. Jābūt iespējai programmu izpildīt atkārtoti, neizejot no
  programmas.
  Izgatavots: 2026-10-08
***************************************/

int input(string jaut) {
  int n;
  do {
    cout << jaut;
    cin >> n;
    if (n < 1) {
      cout << "Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1." << endl;
    }
  } while (n < 1);

  return n;
}

int main() {
  bool repeat = true;
  int size, max, maxSize;

  while (repeat) {
    maxSize = 0;
    size = input("Ievadi cik lielu masīvu vēlies(n>=1)==>");
    int *arr = new int[size];

    arr[0] = input("Ievadi masīva elementu==>");
    max = arr[0];
    for (int i = 1; i < size; i++) {
      arr[i] = input("Ievadi masīva elementu==>");
      if (max < arr[i]) {
        max = arr[i];
      }
    }

    for (int i = 0; i < size; i++) {
      if (max == arr[i]) {
        maxSize++;
      }
    }

    int *maxLoc = new int[maxSize];
    int temp = 0;
    for (int i = 0; i < size; i++) {
      if (max == arr[i]) {
        maxLoc[temp] = i;
        temp++;
      }
    }

    for (int i = 0; i < maxSize; i++) {
      cout << maxLoc[i] << ". Elements \n";
    }

    delete[] maxLoc;
    delete[] arr;

    cout << "Vai vēlies turpināt\n1==Jā | 0==Nē\n==>";
    cin >> repeat;
  }
  return 0;
}

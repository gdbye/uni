#include <iostream>
#include <string>
using namespace std;
/**********************
AuPLa08_papildus. Sastādīt C++ funkciju center(s, garums, aizpilde), kas ir
līdzīga Python metodei center(length, fill_character). Funkcija center(s,
garums, aizpilde) no saņemtās augsta līmeņa simbolu virknes s izveido augsta
līmeņa simbolu virkni ar garumu garums, kurā dotā virkne s ir novietota centrēti
un abas malas ir aizpildītas ar simbolu aizpilde. Noklusētā simbola aizpilde
vērtība ir atstarpes simbols (“Space”). Sastādīt C++ programmu, kurā tiek
izsaukta funkcija center(s, garums, aizpilde).

programmu izveidoja: Jānis Bašēns
programma izveidota: 22/10/2026
***********************/

string center(string str, int length, char fill_charecter) {
  if (length <= 0) {
    return str;
  }

  string temp = "";
  for (int i = 0; i < length; i++) {
    temp += fill_charecter;
  }
  str = temp + str + temp;
  return str;
}

int main() {
  char fill_charecter;
  string s;
  int length;
  cout << "Ievadi garumu ==> ";
  cin >> length;

  cout << "Ievadi simbolu ==> ";
  cin >> fill_charecter;
  cin.ignore();

  cout << "Ievadi simbolu virkni ==> ";
  getline(cin, s);

  s = center(s, length, fill_charecter);
  cout << s;

  return 0;
}

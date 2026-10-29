"""
AuPLa0802. Sastādīt Python funkciju getNatural(), kas atgriež kā rezultātu korektu naturālu skaitli. Skaitļa vērtību pieprasa ievadīt lietotājam tik ilgi, kamēr ievada korektu vērtību – vērtība lielāka par nulli.
Sastādīt arī programmu, kurā tiek izsaukta funkcija getNatural.

programmu izveidoja: Jānis Bašēns
programma izveidota: 22/10/2026
"""

"""
def ievade();
Funkija input()
  Prasa ievadīt naturālu skaitli
  Pārbauda, vai ir naturāls skaitliski
  Ja nav, tad atkārtoti prasa ievadi
  Ja ir, tad atgriež ievadīto skaitli
"""


def getNatural():
    n = int(input("Ievadiet naturālu skaitli >=1==>"))
    while n < 1:
        n = int(input("Kļūdaina ievade, Ievadi naturālu skatli >=1==>"))
    return n


print(getNatural())

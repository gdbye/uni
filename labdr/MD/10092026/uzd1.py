"""
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti.
Programma izveidota 08.09.2026.
"""

repeat = True
while repeat:
  # Pārbauda vai ir ievadīts naturāls skaitlis.
  n = int(input("Ievadiet naturālu skaitli n, n>=1: "))
  while n < 1:
      n = int(input("Neder, Ievadi naturālu skatli(n>=1)==>"))


  # Pārbauda no 1 līdz n skaitlim vai ir derīgs un izprintē to.
  for y in range(n):
      if n % ((y + 1) ** 2) == 0:
          print(y + 1)

  repeat = bool(input("Vai turpināt (1) vai beigt (0)==>")))


"""
  ievade       |      paredzamais rezultāts
------------------------------
      36       |      1 2 3 6
      25       |      1 5
      66       |      1
      -30      |      Ievadi naturālu skaitli
      0        |      Ievadi naturālu skaitli

"""

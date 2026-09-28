"""
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti.
Programma izveidota 08.09.2026.
"""

# Prasa ievadi kamēr nav ievadīts naturāls skaitlis.
while True:
    x = int(input("Ievadi n=>"))
    if x > 0:
        break
    else:
        print("Ievadi naturālu skaitli")

# Pārbauda no 1 līdz n skaitlim vai ir derīgs un izprintē to.
for y in range(x):
    if x % ((y + 1) ** 2) == 0:
        print(y + 1)


"""
  ievade       |      paredzamais rezultāts
------------------------------
      36       |      1 2 3 6
      25       |      1 5
      66       |      1
      -30      |      Ievadi naturālu skaitli
      0        |      Ievadi naturālu skaitli

"""

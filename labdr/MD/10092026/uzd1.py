"""
Jānis Bašēns, jb26076
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda
naturāla skaitļa kvadrāti. Programma izveidota 08.09.2026.
"""

x = int(input("Ievadi n=>"))

# Pārbauda no 1 līdz n skaitlim vai ir derīgs un izprintē to.
for y in range(x):
    if x % ((y + 1) ** 2) == 0:
        print(y + 1)

"""
uzd2.py
Sastādīt python programmu,
kas pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību.
Programmas autors Jānis Bašēns
Izveidota 17.09.2026.
"""

n = int(input("Cik veselus skaitļus ievadīsi==>"))
biggest = 0

for i in range(n):
    x = int(input("ievadi skaitli==>"))
    biggest = max(biggest, x)

print(biggest)

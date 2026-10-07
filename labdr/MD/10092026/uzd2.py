"""
Jānis Bašēns, jb26076
B8. Doti trīs naturāli skaitļi. Noteikt, vai starp dotajiem skaitļiem ir tāds,
kura ciparu summa ir vienāda ar pārējo divu skaitļu starpību. Ja ir, izdrukāt šo
skaitli. Skaitļu dalīšana ciparos jāveic skaitliski. Risinājumā izmantot
funkciju, kas aprēķina skaitļa ciparu summu.
Programma izveidota 08.09.2026.
"""

"""
int input();
Funkija input()
  Prasa ievadīt naturālu skaitli
  Pārbauda vai ir naturāls skaitliski
  Ja nav tad atkārtoti prasa ievadi
  Ja ir tad atgriež ievadīto skaitli
"""


def ievade():
    n = int(input("Ievadiet naturālu skaitli n, (n>=1): "))
    while n < 1:
        n = int(input("Neder, Ievadi naturālu skatli(n>=1)==>"))
    return n


"""
int digit_sum(int x);
funkcija digit_sum(x)
  Saskaita dotā naturālā skaitļa ciparu summu
  un to atgriež
"""


def digit_sum():
    n = ievade()
    temp = n
    sum = 0
    while temp > 0:
        sum += temp % 10
        temp //= 10
    return sum, n


"""
def test(int x_digit, int x, int y, int z);
Funkcija test(x_digit, x, y, z)
  Pārbauda uzdevuma nosacījumus
  Ja piepildās izprintē x
  Ja nepiepildās neko neizprintē
"""


def test(x_digit, y, z, x):
    if x_digit == abs(y - z):
        print(x)


# Ievada naturālos skaitļus.
a = ievade()
b = ievade()
c = ievade()

# Saskaita katram ievadītam naturālam skaitlim ciparu summu.
a_digit, a = digit_sum()
b_digit, b = digit_sum()
c_digit, c = digit_sum()

# Pārbauda uzdevuma nosacījumu.
test(a_digit, b, c, a)
test(b_digit, a, c, b)
test(c_digit, a, b, c)

"""
    ievade     |      paredzamais rezultāts
------------------------------
    12 25 20   |
    15 20 23   |      23
    12 20 23   |      12
  -12 12 25 20 | Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1.
"""

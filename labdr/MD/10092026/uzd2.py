"""
Jānis Bašēns, jb26076
B8. Doti trīs naturāli skaitļi. Noteikt, vai starp dotajiem skaitļiem ir tāds,
kura ciparu summa ir vienāda ar pārējo divu skaitļu starpību. Ja ir, izdrukāt šo
skaitli. Skaitļu dalīšana ciparos jāveic skaitliski. Risinājumā izmantot
funkciju, kas aprēķina skaitļa ciparu summu.
Programma izveidota 08.09.2026.
"""

"""
def ievade();
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
def digit_sum(int x);
  x => naturāls skaitlis kam skaitīs ciparu summu
funkcija digit_sum(x)
  Saskaita dotā naturālā skaitļa ciparu summu
  un atgriež summu
"""


def digit_sum(x):
    sum = 0
    while x > 0:
        sum += x % 10
        x //= 10
    return sum


"""
def test(int x_digit, int x, int y, int z);
  x_digit => izmanto lai salīdzinātu ar y un z starpību
  x => Lai izprintētu
  y => izmanto starpības noteikšanā
  z => izmanto starpības noteikšanā
Funkcija test(x_digit, x, y, z)
  Pārbauda uzdevuma nosacījumus
  Ja piepildās izprintē x
  Ja nepiepildās neko neizprintē
"""


def test(x_digit, y, z, x):
    if x_digit == abs(y - z):
        print(x)

repeat = True
while repeat:
  # Ievada naturālos skaitļus.
  a = ievade()
  b = ievade()
  c = ievade()

  # Saskaita katram ievadītam naturālam skaitlim ciparu summu.
  a_digit = digit_sum(a)
  b_digit = digit_sum(b)
  c_digit = digit_sum(c)

  # Pārbauda uzdevuma nosacījumu.
  test(a_digit, b, c, a)
  test(b_digit, a, c, b)
  test(c_digit, a, b, c)

  repeat = bool(input("Vai turpināt (1) vai beigt (0)==>")))

"""
    ievade     |      paredzamais rezultāts
------------------------------
    12 25 20   |
    15 20 23   |      23
    12 20 23   |      12
  -12 12 25 20 | Kļūdaina vērtība. Jāievada naturalu skaitli, n>=1.
"""

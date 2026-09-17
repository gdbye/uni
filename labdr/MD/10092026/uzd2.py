"""
Jānis Bašēns, jb26076
B8. Doti trīs naturāli skaitļi. Noteikt, vai starp dotajiem skaitļiem ir tāds,
kura ciparu summa ir vienāda ar pārējo divu skaitļu starpību. Ja ir, izdrukāt šo
skaitli. Skaitļu dalīšana ciparos jāveic skaitliski. Risinājumā izmantot
funkciju, kas aprēķina skaitļa ciparu summu.
Programma izveidota 08.09.2026.
"""


# Ievada skaitli x, un saskaita tā ciparu summas
def digit_sum():
    x = int(input("ievadi skaitli =>"))
    temp = x
    sum = 0
    while temp > 0:
        sum += temp % 10
        temp //= 10
    return sum, x


# Pārbauda vai ir patiess un izprintē to ja iznākums ir derīgs
def test(x_digit, y, z, x):
    if x_digit == abs(y - z):
        print(x)


a_digit, a = digit_sum()
b_digit, b = digit_sum()
c_digit, c = digit_sum()

test(a_digit, b, c, a)
test(b_digit, a, c, b)
test(c_digit, a, b, c)

"""
    ievade     |      paredzamais rezultāts
------------------------------
    12 25 20   |
    15 20 23   |      23
    12 20 23   |      12
"""

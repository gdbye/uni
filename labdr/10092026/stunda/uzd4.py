def f(x):
    if x < -2:
        return 0
    elif -2 <= x & x <= -1:
        return -x - 2
    elif -1 < x & x < 1:
        return x
    elif 1 <= x & x < 2:
        return -x + 2
    elif x >= 2:
        return 0


x = float(input("Ievadi x==>"))
print("y==", f(x))

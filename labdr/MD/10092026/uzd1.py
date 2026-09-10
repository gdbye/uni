x = int(input("Ievadi n=>"))

for y in range(x):
    if x % ((y + 1) ** 2) == 0:
        print(y + 1)

def ievade(jautajums):
    while True:
        x = int(input(jautajums))
        if x > 0:
            return x
        else:
            print("Ievadi naturālu skaitli")


garums = maxGarums = 1
n, x, last = 0, 0, 0

while True:
    x = int(ievade("Cik daudz skaitļus gribi ievadīt?"))
    for i in range(x):
        

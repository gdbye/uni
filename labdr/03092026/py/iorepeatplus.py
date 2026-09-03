# Skaitļa kvadrāta aprēķināšana
while True:
    try:
        s= input('Ievadi skaitli: ')
        valnum = int(s)
        print("Skaitlis " ,valnum, " kvadrātā ir " 
        ,valnum*valnum)
    except ValueError:
        print("Ievades kļūda: ",s)
    ok = int(input("Vai turpināt (1) vai beigt (0)?"))
    if ok !=1:
        break

# Skaitļa kvadrāta aprēķināšana
try:
    s= input('Ievadi skaitli: ')
    valnum = int(s)
    print("Skaitlis " ,valnum, " kvadrātā ir " 
       ,valnum*valnum)
except ValueError:
    print("Ievades kļūda: ",s)
    
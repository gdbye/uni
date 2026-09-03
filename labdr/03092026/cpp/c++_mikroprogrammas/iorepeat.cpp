// Skaitļa kvadrāta aprēķināšana
#include<iostream>
using namespace std;
int main()
{
    int ok;
    do
    {
        double valnum;
        cout << "Ievadi skaitli: ";
        cin >> valnum;
        cout << "Skaitlis " << valnum << " kvadrātā ir " << valnum*valnum << endl;
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}

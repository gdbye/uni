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
        if (cin.good())
            cout << "Skaitlis " << valnum << " kvadrātā ir " << valnum*valnum << endl;
        else
        {
            cin.clear();
            cin.ignore(256,'\n');
            cout << "Ievades kļūda -- jāievada skaitlis." << endl;
        }
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}

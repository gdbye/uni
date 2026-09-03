// Skaitļa kvadrāta aprēķināšana
#include<iostream>
using namespace std;
int main()
{
    double valnum;
    cout << "Ievadi skaitli: ";
    cin >> valnum;
    if (cin.good())
        cout << "Skaitlis " << valnum << " kvadrātā ir " << valnum*valnum << endl;
    else
        cout << "Ievades kļūda -- jāievada skaitlis." << endl;
}

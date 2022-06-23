/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;

struct student
{
    char name[50];
    char Surname[50];
    char Birthdate[50];
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter Surname: ";
    cin >> s.Surname;
    cout << "Enter Your Birthdate(DD/MM/YYYY) ";
    cin >> s.Birthdate;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Surname: " << s.Surname << endl;
    cout << "Birthdate: " << s.Birthdate << endl;
    return 0;
}

//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <iostream>
using namespace std;
int main()
{
    char gender;

    cout << "Which gender you are in : ";

    cin >> gender;

    if (gender == 'M' || gender == 'm')
    {
        cout << "Good Morning Sir";
    }

    else if (gender == 'F' || gender == 'f')
    {
        cout << "Good Morning Ma'am";
    }

    else
    {
        cout << "Invalid Gender";
    }

    return 0;
}
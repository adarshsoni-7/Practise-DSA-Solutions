//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number you want to check if it is even or odd: ";

    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is a even number";
    }

    else
    {
        cout << num << " is a odd number";
    }
    return 0;
}
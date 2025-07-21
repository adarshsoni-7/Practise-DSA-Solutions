//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number which you want to be reversed: ";

    cin >> num;

    while (num > 0)
    {
        cout << num % 10;

        num = num / 10;
    }

    return 0;
}
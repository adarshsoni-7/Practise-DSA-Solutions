// ------------------------------
// Before jumping into the code, please try it yourself first
//

#include <iostream>
using namespace std;

int main()
{
    int num, sumOfFactorials = 0;

    cout << "Enter the number: ";

    cin >> num;

    int originalNum = num;

    while (num > 0)
    {
        int lastDigit = num % 10;

        int factorialOfNum = 1;
        while (lastDigit > 0)
        {
            factorialOfNum *= lastDigit;
            lastDigit -= 1;
        }

        sumOfFactorials += factorialOfNum;
        num = num / 10;
    }

    if (sumOfFactorials == originalNum)
    {
        cout << originalNum << " is a strong number";
    }

    else
    {
        cout << originalNum << " is not a strong number";
    }

    return 0;
}

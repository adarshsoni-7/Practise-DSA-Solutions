//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int year;

    cout << "Enter the year: ";

    cin >> year;

    // Approach 1

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year";
            }
            else
            {
                cout << year << " is not a leap year";
            }
        }
        else
        {
            cout << year << " is a leap year";
        }
    }
    else
    {
        cout << year << " is not a leap year";
    }

    // Approach 2

    if (year % 400 == 0)
    {
        cout << year << " is a leap year";
    }

    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is a leap year";
    }

    else
    {
        cout << year << " is not a leap year";
    }
}

/* ✅ Approach 1: Nested If-Else
In this approach, we use a step-by-step nested conditional structure to check if the given year is a leap year:

First, check if the year is divisible by 4.

If yes, then check if it is also divisible by 100.

If yes, further check if it is divisible by 400.

If yes, then it is a leap year.

Else, it is not a leap year.

If not divisible by 100, then it is still a leap year.

If the year is not divisible by 4, then it is not a leap year.

This approach thoroughly handles all cases, especially for century years (like 1900, 2000) by clearly separating each condition using nested blocks.

✅ Approach 2: Optimized If-Else
In this approach, the logic is implemented in a more compact and readable form using compound conditions.

I assume that if the year is a century year, we first check whether it is divisible by 400. If it is, then it is a leap year.

Otherwise, we move to the else if block where we check if the year is divisible by 4 but not divisible by 100, which also qualifies as a leap year.

If neither condition is satisfied, then the year is not a leap year.

This structure avoids deep nesting and still handles all edge cases accurately, especially for non-century and century years.*/
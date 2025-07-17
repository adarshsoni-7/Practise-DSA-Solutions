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

/*
Explanation of Even/Odd Number Checker:

1. What are Even and Odd Numbers?
   - Even numbers can be divided by 2 with no remainder (like 2, 4, 6, 8...)
   - Odd numbers have remainder 1 when divided by 2 (like 1, 3, 5, 7...)

2. The Program Uses Modulo Operator (%)
   - % gives us the remainder after division
   - num % 2 means "divide num by 2 and give me the remainder"
   - For even numbers: remainder is 0
   - For odd numbers: remainder is 1

3. How the Program Works:
   Step 1: Get a number from user
   Step 2: Calculate num % 2
   Step 3: Check if remainder is 0
          - If true: number is even
          - If false: number is odd

4. Examples:
   If num = 4:
   4 % 2 = 0 (4 ÷ 2 = 2 remainder 0)
   0 == 0? Yes! So 4 is even

   If num = 7:
   7 % 2 = 1 (7 ÷ 2 = 3 remainder 1)
   1 == 0? No! So 7 is odd

   If num = 0:
   0 % 2 = 0 (0 ÷ 2 = 0 remainder 0)
   0 == 0? Yes! So 0 is even

Note:
- The condition (num % 2 == 0) reads as "is the remainder equal to zero?"
- All whole numbers are either even or odd
- Zero is considered an even number
- Negative numbers work the same way (-4 is even, -7 is odd)
*/
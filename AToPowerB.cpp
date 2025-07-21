//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int base, baseToThePower;

    cout << "Enter your base number: ";

    cin >> base;

    cout << "Enter base to the power: ";

    cin >> baseToThePower;

    long long totalAns = 1;

    for (int i = 1; i <= baseToThePower; i += 1)
    {
        totalAns *= base;
    }

    cout << base << " to the power " << baseToThePower << " is: " << totalAns << endl;

    return 0;
}

/*
✅ Purpose:
This program calculates base^power using a simple loop.

✅ Working:
1. Take two inputs:
   - base (A)
   - exponent (B)

2. Initialize result = 1.

3. Run a loop from 1 to B:
   - Multiply result by base in each iteration.
   - This simulates: base * base * ... (B times)

4. After the loop ends, result = A^B.

✅ Example:
Input: base = 2, power = 3
Steps: result = 1 → 2 → 4 → 8
Output: 2 to the power 3 is: 8

✅ Time Complexity: O(B)
✅ Space Complexity: O(1)
*/

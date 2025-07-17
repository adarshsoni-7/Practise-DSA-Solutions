//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter the first number: ";

    cin >> num1;

    cout << "Enter the second number: ";

    cin >> num2;

    cout << "Enter the third number: ";

    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is the greatest number";
    }

    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is the greatest number";
    }

    else if (num3 > num1 && num3 > num2)
    {

        cout << num3 << " is the greatest number";
    }

    else
    {
        cout << "All are equal";
    }

    return 0;
}

/*
Explanation of Finding Greatest Among Three Numbers:

1. Program Purpose:
   - Takes three numbers from user
   - Compares them to find the largest
   - Handles the case when numbers are equal

2. How && (AND) Operator Works:
   - && means "and"
   - condition1 && condition2 is true only if BOTH conditions are true
   Example: num1 > num2 && num1 > num3
   - True only if num1 is greater than BOTH num2 AND num3

3. Program Logic Flow:
   Step 1: Get three numbers from user

   Step 2: Compare using if-else ladder:
   a) Check if num1 is greatest:
      - Is num1 > num2 AND num1 > num3?
      - If yes, num1 is greatest

   b) If not, check if num2 is greatest:
      - Is num2 > num1 AND num2 > num3?
      - If yes, num2 is greatest

   c) If not, check if num3 is greatest:
      - Is num3 > num1 AND num3 > num2?
      - If yes, num3 is greatest

   d) If none of above true:
      - Numbers must be equal

4. Examples:
   Example 1: num1 = 5, num2 = 3, num3 = 4
   - Is 5 > 3 AND 5 > 4? Yes! → 5 is greatest

   Example 2: num1 = 3, num2 = 7, num3 = 4
   - Is 3 > 7 AND 3 > 4? No
   - Is 7 > 3 AND 7 > 4? Yes! → 7 is greatest

   Example 3: num1 = 4, num2 = 4, num3 = 4
   - Is 4 > 4 AND 4 > 4? No
   - Is 4 > 4 AND 4 > 4? No
   - Is 4 > 4 AND 4 > 4? No
   - None true → All are equal

Note:
- The program assumes all inputs are integers
- The order of comparisons doesn't matter
- Using && ensures we only pick a number if it's greater than BOTH others
- This program will also work with negative numbers
- Current logic considers equal numbers in the 'else' case

Alternative Approaches:
1. Using max() function:
   int greatest = max(num1, max(num2, num3));

2. Using nested if statements:
   if(num1 > num2) {
       if(num1 > num3) greatest = num1;
       else greatest = num3;
   } else {
       if(num2 > num3) greatest = num2;
       else greatest = num3;
   }
*/

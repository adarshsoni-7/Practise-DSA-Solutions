//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
   int num1, num2;

   cout << "Enter the first number: ";

   cin >> num1;

   cout << "Enter the second number: ";

   cin >> num2;

   if (num1 > num2)
   {

      cout << num1 << " is the greatest number";
   }

   else if (num2 > num1)
   {
      cout << num2 << " is the greatest number";
   }

   else
   {
      cout << "Both are equal";
   }
}

/*
Explanation of Number Comparison Program:

1. Program Purpose:
   - Takes two numbers from the user
   - Compares them to find which one is greater
   - Handles the case when numbers are equal

2. How if-else Statements Work:
   if (condition1)       // First check
   {
      // Run this if condition1 is true
   }
   else if (condition2)  // Second check (only if first was false)
   {
      // Run this if condition2 is true
   }
   else                  // If all above conditions were false
   {
      // Run this code
   }

3. The Logic Flow:
   Step 1: Check if num1 > num2
          - If true: First number is greater
          - If false: Go to next check

   Step 2: Check if num2 > num1
          - If true: Second number is greater
          - If false: Go to else

   Step 3: If neither was greater, they must be equal

4. Example:
   If num1 = 5 and num2 = 3:
   - Is 5 > 3? Yes! Print "5 is the greatest number"

   If num1 = 2 and num2 = 7:
   - Is 2 > 7? No, check next
   - Is 7 > 2? Yes! Print "7 is the greatest number"

   If num1 = 4 and num2 = 4:
   - Is 4 > 4? No, check next
   - Is 4 > 4? No, go to else
   - Print "Both are equal"

Note:
- The comparison operators are:
  > greater than
  < less than
  == equal to
  >= greater than or equal to
  <= less than or equal to
*/
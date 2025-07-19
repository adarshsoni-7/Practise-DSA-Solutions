//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <bits/stdc++.h>
using namespace std;

int calculateAreaOfTriangle(int firstSide, int secondSide, int thirdSide)
{
   // Heron's Formula = Under route s * (s-a) (s-b) (s-c) where s = semi-perimeter of triangle so firstly we have to calculate the semi-perimeter of the triangle by this formula = s = (a + b + c ) / 2 where a, b and c are threes sides of the trinagle
   int s = (firstSide + secondSide + thirdSide) / 2.0;

   int areaOfTriangle = sqrt(s * (s - firstSide) * (s - secondSide) * (s - thirdSide));

   return areaOfTriangle;
}
int main()
{
   int firstSide, secondSide, thirdSide;

   cout << "Enter the first side of triangle : ";
   cin >> firstSide;
   cout << "Enter the second side of triangle : ";
   cin >> secondSide;
   cout << "Enter the third side of triangle : ";
   cin >> thirdSide;

   int areaOfTriangle = calculateAreaOfTriangle(firstSide, secondSide, thirdSide);
   cout << "The area of the triangle is : " << areaOfTriangle << endl;

   return 0;
}

/*
Explanation of Triangle Area Calculator:

1. What is Heron's Formula?
   - It's a way to calculate the area of a triangle when you know all three sides
   - You don't need to know the height or angles of the triangle

2. The Program Takes 3 Inputs:
   - firstSide (a): Length of first side
   - secondSide (b): Length of second side
   - thirdSide (c): Length of third side

3. How the Calculation Works:
   Step 1: Calculate semi-perimeter (s)
   s = (a + b + c) / 2

   Step 2: Calculate area using Heron's formula
   Area = √(s * (s-a) * (s-b) * (s-c))
   where √ means square root

4. Example:
   If sides are 3, 4, and 5:
   Step 1: s = (3 + 4 + 5) / 2 = 12/2 = 6

   Step 2: Area = √(6 * (6-3) * (6-4) * (6-5))
                = √(6 * 3 * 2 * 1)
                = √36
                = 6

Note:
- The program returns an integer value, so decimal places are truncated
- Make sure the sides you enter can form a valid triangle
  (sum of any two sides must be greater than the third side)
*/

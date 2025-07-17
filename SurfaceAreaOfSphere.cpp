//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int radiusOfSphere;
    cout << "Enter the radius of sphere: ";

    cin >> radiusOfSphere;

    float valOfPI = 3.14;

    float surfaceAreaOfSphere = 4 * valOfPI * radiusOfSphere * radiusOfSphere;

    cout << "Surface Area of Sphere is " << surfaceAreaOfSphere << endl;

    return 0;
}

/*
Explanation of Sphere Surface Area Calculator:

1. What is Surface Area of a Sphere?
   - It's the total area of the outer surface of a sphere
   - Think of it as the amount of wrapping paper needed to cover a perfectly round ball

2. The Program Takes 1 Input:
   - radiusOfSphere (r): The distance from the center of the sphere to its surface

3. The Formula Used:
   Surface Area = 4 * π * r²
   where:
   - π (PI) is approximately 3.14
   - r² means radius multiplied by itself (radius squared)
   - 4 is a constant in the formula

4. Example Calculation:
   If radius = 5 units:
   Surface Area = 4 * 3.14 * 5 * 5
                = 4 * 3.14 * 25
                = 314 square units

Note:
- The bigger the radius, the much bigger the surface area (because of r²)
- We use float instead of int for PI to get more accurate results
- The final answer represents square units (like square meters, square centimeters, etc.)
*/

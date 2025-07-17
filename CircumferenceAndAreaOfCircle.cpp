//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int radiusOfCircle;

    cout << "Enter the radius of the circle: ";

    cin >> radiusOfCircle;

    float PI = 3.14;
    float circumference = 2 * PI * radiusOfCircle;
    float area = PI * radiusOfCircle * radiusOfCircle;

    cout << "Circumference of Circle is " << circumference << " units" << endl;
    cout << "Area of circle is " << area << " square units" << endl;
    return 0;
}

/*
Explanation of Circle Calculator:

1. Basic Circle Terms:
   - Radius: Distance from center to edge of circle
   - Circumference: Distance around the circle (like measuring around a wheel)
   - Area: Space inside the circle (like measuring how much paint needed to fill it)
   - π (PI): Special mathematical constant ≈ 3.14

2. The Program Takes 1 Input:
   - radiusOfCircle (r): The radius of the circle

3. Formulas Used:
   a) Circumference = 2 * π * r
      - 2 because we go around the circle once
      - π * r gives half the distance around

   b) Area = π * r²
      - r² means radius multiplied by itself
      - π * r² gives exact space inside circle

4. Example Calculation:
   If radius = 5 units:

   Circumference = 2 * 3.14 * 5
                = 31.4 units

   Area = 3.14 * 5 * 5
        = 3.14 * 25
        = 78.5 square units

Note:
- We use float instead of int for more accurate decimal results
- Circumference is measured in units (like cm, m, etc.)
- Area is measured in square units (like cm², m², etc.)
- The bigger the radius, the much bigger the area (because of r²)
*/
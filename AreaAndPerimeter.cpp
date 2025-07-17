//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the length : ";
    cin >> length;

    int width;
    cout << "Enter the width : ";
    cin >> width;

    int areaOfRectangle = length * width;
    int perimeterOfRectangle = 2 * (length + width);


    cout << "The area of rectangle is " << areaOfRectangle << " and the perimeter is " << perimeterOfRectangle  << endl;
    return 0;
}

/*
Explaination: 
1. We first take two inputs from the user: length and width

2. To calculate area (the space inside the rectangle):
   - Formula: area = length × width
   - Example: if length = 5 and width = 4
   - Then area = 5 × 4 = 20 square units

3. To calculate perimeter (the distance around the rectangle):
   - Formula: perimeter = 2 × (length + width)
   - Example: if length = 5 and width = 4
   - Then perimeter = 2 × (5 + 4) = 2 × 9 = 18 units

4. Finally, we display both results to the user

*/
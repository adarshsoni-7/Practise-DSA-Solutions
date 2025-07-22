//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int dayNum;

    cout << "Enter the number of the day: ";
    cin >> dayNum;

    switch (dayNum)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid number of day";
        break;
    }

    return 0;
}


/*     ------------------📝 Explanation ------------------

🔹 **Purpose**: This program maps a number (from 1 to 7) to the corresponding day of the week using a `switch` statement.

🔹 **How it works**:
1. The user is asked to enter a number (`dayNum`).
2. A `switch` statement checks the value of `dayNum`:
   - 1 → Monday
   - 2 → Tuesday
   - 3 → Wednesday
   - 4 → Thursday
   - 5 → Friday
   - 6 → Saturday
   - 7 → Sunday
3. If the input doesn't match 1–7, the `default` case runs and prints "Invalid number of day".

🔹 **Key Point**:
   - The `break` keyword is used to exit the switch after a match is found. Without it, the program would continue executing all following cases (called *fall-through*).

🔹 **Improvement Tip**:
   - You had `case 8:` for invalid input, but since `8` is a specific value, it won’t catch other invalid entries like `0`, `9`, etc. It’s better to use `default:` instead, which we corrected above.

*/

//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char alphabet;

    cout << "Enter the alphabet: ";
    cin >> alphabet;
    alphabet = tolower(alphabet);

    switch (alphabet)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;

    default:
        cout << "Consonant";
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

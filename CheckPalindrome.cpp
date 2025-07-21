//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  ------------------------------

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number which you want to be reversed: ";
    cin >> num;

    int originalNum = num;  // ✅ Store the original number to compare later for palindrome
    int reversedNum = 0;    // ✅ This will store the reversed number

    // 🧾 What is a palindrome?
    // A number (or string) is a palindrome when it reads the same forwards and backwards.
    // For example: 121, 12321, 777, 1 → All are palindromes.
    // But 123 is not a palindrome because its reverse is 321.

    // 🔁 The logic here is to reverse the number by extracting digits from the back
    // We do this using num % 10 to get the last digit
    // And then build the reversed number by: reversedNum = reversedNum * 10 + lastDigit
    //
    // 💡 Intuition:
    // - Every time we multiply reversedNum by 10, we are shifting its digits left by 1 place
    //   (just like making space for the next digit at the unit place)
    // - Then we add the lastDigit we just extracted
    //
    // 👉 For example:
    //    num = 432
    //    Step 1: lastDigit = 2 → reversedNum = 0 * 10 + 2 = 2
    //    Step 2: lastDigit = 3 → reversedNum = 2 * 10 + 3 = 23
    //    Step 3: lastDigit = 4 → reversedNum = 23 * 10 + 4 = 234 ✅
    //
    // 🧠 And we don’t need to multiply with 100 or 1000 because:
    //    - Each time we multiply by 10, the number grows correctly by one digit place.
    //    - The position for the next digit automatically adjusts with just *10.
    //
    // So this simple line keeps giving us the reversed number step by step.

    while (num > 0)
    {
        int lastDigit = num % 10;                         // extract the last digit
        reversedNum = (reversedNum * 10) + lastDigit;     // shift digits left and add new one
        num = num / 10;                                   // remove the last digit from num
    }

    // ✅ After the loop, reversedNum holds the reversed version of originalNum
    // Now check if originalNum and reversedNum are equal

    if (reversedNum == originalNum)
    {
        cout << "Palindrome";  // If equal → it is a palindrome
    }
    else
    {
        cout << "Not palindrome";  // Otherwise → not a palindrome
    }

    return 0;
}

/*
📝 Final Intuition:
- We extract the last digit using num % 10.
- Build the reversed number by: reversed = reversed * 10 + lastDigit.
- This works because multiplying by 10 shifts digits left, leaving space to add the next digit.
- No need for multiplying by 100 or 1000 — just *10 adjusts the position automatically.
- Finally, we compare the reversed number with the original to check for palindrome.

📌 A palindrome is a number or string that reads the same from left to right and right to left.
*/

//  ------------------------------
//        NATURAL NUMBERS PRINTER
//  ------------------------------
//  Before jumping into the code, please try it yourself first :)

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask the user how many natural numbers they want to print
    cout << "Up to which natural number you want: ";
    cin >> n;

    // ---------------------------------------------------------
    // ❗ Validation: Check for invalid input
    // ---------------------------------------------------------
    // ➤ Natural numbers are **positive integers starting from 1**
    // ➤ So, if the user enters a number less than 1 (like 0 or negative),
    //    it's not valid for printing natural numbers
    if (n < 0)
    {
        cout << "Natural numbers start from 0. Please enter a number >= 0.";
        return 0; // Exit early if input is invalid
    }

    // ---------------------------------------------------------
    // ✅ Printing Natural Numbers from 1 to n
    // ---------------------------------------------------------
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}

/*
======================= EXPLANATION =======================

💡 Objective:
To print the first `n` natural numbers starting from 1.

📘 What are Natural Numbers?
  ➤ Natural numbers are **positive integers** starting from 1.
  ➤ That means: 1, 2, 3, 4, 5, ... ∞
  ➤ So 0 and negative numbers are **NOT** natural numbers (according to computer science standard, from standard Math 0 is not a natural number)

=======================
❗ Validation Step:
=======================
→ We check: if (n < 1)
    - If the user enters 0 or a negative number, we display an error message.
    - This is because such numbers do not fall under the category of natural numbers.

=======================
🔁 Loop Logic:
=======================
→ We use a for loop to print numbers from 1 to n.
→ Each number is printed with a space.

🧠 Tip:
Start the loop from 1 (not 0), because 0 is **not** a natural number.

*/

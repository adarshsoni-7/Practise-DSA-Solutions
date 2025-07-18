// ------------------------------
// Before jumping into the code, please try it yourself first
// ------------------------------

#include <iostream>
using namespace std;

int main()
{
    // Step 1: Declare variables
    int amount; // input amount
    int notesOf500 = 0, notesOf200 = 0, notesOf100 = 0;
    int notesOf50 = 0, notesOf20 = 0, notesOf10 = 0;
    int notesOf5 = 0, notesOf2 = 0, notesOf1 = 0;

    // Step 2: Take amount input from the user
    cout << "Enter the amount: ";
    cin >> amount;

    int orginalAmt = amount; // To keep a copy of the original amount for display

    // Step 3: Start calculating number of notes using largest denomination first

    // Check if 500 rupees notes can be used
    if (amount >= 500)
    {
        notesOf500 = amount / 500; // Number of 500 rupee notes
        amount = amount % 500;     // Remaining amount
    }

    // Check for 200 rupees notes
    if (amount >= 200)
    {
        notesOf200 = amount / 200;
        amount = amount % 200;
    }

    // Check for 100 rupees notes
    if (amount >= 100)
    {
        notesOf100 = amount / 100;
        amount = amount % 100;
    }

    // Check for 50 rupees notes
    if (amount >= 50)
    {
        notesOf50 = amount / 50;
        amount = amount % 50;
    }

    // Check for 20 rupees notes
    if (amount >= 20)
    {
        notesOf20 = amount / 20;
        amount = amount % 20;
    }

    // Check for 10 rupees notes
    if (amount >= 10)
    {
        notesOf10 = amount / 10;
        amount = amount % 10;
    }

    // Check for 5 rupees coins
    if (amount >= 5)
    {
        notesOf5 = amount / 5;
        amount = amount % 5;
    }

    // Check for 2 rupees coins
    if (amount >= 2)
    {
        notesOf2 = amount / 2;
        amount = amount % 2;
    }

    // Check for 1 rupee coins
    if (amount >= 1)
    {
        notesOf1 = amount / 1;
        amount = amount % 1;
    }

    // Step 4: Display result
    cout << "For amount " << orginalAmt << ", you need:" << endl;

    // Print only the notes/coins which are required (value >= 1)
    if (notesOf500 >= 1)
        cout << notesOf500 << (notesOf500 > 1 ? " notes" : " note") << " of 500" << endl;

    if (notesOf200 >= 1)
        cout << notesOf200 << (notesOf200 > 1 ? " notes" : " note") << " of 200" << endl;

    if (notesOf100 >= 1)
        cout << notesOf100 << (notesOf100 > 1 ? " notes" : " note") << " of 100" << endl;

    if (notesOf50 >= 1)
        cout << notesOf50 << (notesOf50 > 1 ? " notes" : " note") << " of 50" << endl;

    if (notesOf20 >= 1)
        cout << notesOf20 << (notesOf20 > 1 ? " notes" : " note") << " of 20" << endl;

    if (notesOf10 >= 1)
        cout << notesOf10 << (notesOf10 > 1 ? " notes" : " note") << " of 10" << endl;

    if (notesOf5 >= 1)
        cout << notesOf5 << (notesOf5 > 1 ? " notes" : " note") << " of 5" << endl;

    if (notesOf2 >= 1)
        cout << notesOf2 << (notesOf2 > 1 ? " notes" : " note") << " of 2" << endl;

    if (notesOf1 >= 1)
        cout << notesOf1 << (notesOf1 > 1 ? " notes" : " note") << " of 1" << endl;

    return 0;
}

/*

======================= EXPLANATION =======================
    💡 Purpose:
    This program takes an amount as input and breaks it down into the minimum number of Indian currency notes/coins:
    (₹500, ₹200, ₹100, ₹50, ₹20, ₹10, ₹5, ₹2, ₹1)

    ✅ Step-by-step logic:
    1. Input the amount from the user.
    2. Store the original amount in a separate variable to display later.
    3. For each note denomination starting from highest (500) to lowest (1):
       - Check if the remaining amount is greater than or equal to the current denomination.
       - If yes, calculate how many such notes are needed using: `amount / denomination`.
       - Update the remaining amount using: `amount % denomination`.
    4. After all denominations are checked, display the count of each note used.
    5. The plural form ("note" or "notes") is used appropriately using a ternary operator.

    📌 Example:
    Input: 786
    Output:
        For amount 786, you need:
        1 note of 500
        1 note of 200
        1 note of 50
        1 note of 20
        1 note of 10
        1 note of 5
        1 note of 1

    🧠 Why use this approach?
    - Greedy algorithm: Always use the highest denomination possible first.
    - It gives the minimum number of total notes.


*/

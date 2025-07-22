//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice, num1, num2;

    // Using do-while loop to keep repeating until the user chooses to exit
    do
    {
        // Menu display
        cout << "Choose the number between 1 to 5" << endl;
        cout << "1: Addition" << endl;
        cout << "2: Subtraction" << endl;
        cout << "3: Multiplication" << endl;
        cout << "4: Division" << endl;
        cout << "5: Exit" << endl;

        cout << "Number: ";
        cin >> choice;

        // Only ask for inputs if user is not choosing to exit
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;
        }

        // Perform operation based on user's choice
        switch (choice)
        {
        case 1: // Addition
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2: // Subtraction (non-negative result)
            cout << "Result: " << max(num1, num2) - min(num1, num2) << endl;
            break;

        case 3: // Multiplication
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4: // Division with zero check
            if (num2 != 0)
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by 0!" << endl;
            }
            break;

        case 5: // Exit
            cout << "Exiting the calculator" << endl;
            break;

        default: // For any invalid input
            cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 5); // Keep looping until user chooses option 5

    return 0;
}

/*
------------------📝 Explanation ------------------

💡 This program is a **menu-driven calculator** that performs basic arithmetic operations using a `do-while` loop.

🔁 The `do-while` loop allows the menu and operations to **keep repeating** until the user chooses to exit by entering **option 5**.

📋 Menu options:
1 → Addition
2 → Subtraction (non-negative)
3 → Multiplication
4 → Division (checks for divide-by-zero)
5 → Exit

🧠 Key Concepts:
- `do-while` ensures the menu and calculation happens at least once.
- For subtraction, it uses `max - min` to avoid negative results.
- For division, it checks if `num2` is zero before dividing to avoid errors.
- For invalid choices (not 1-5), it shows an error message.

✅ This logic is clean, readable, and useful as a basic calculator.

*/

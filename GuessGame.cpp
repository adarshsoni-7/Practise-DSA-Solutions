//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // Seed the random number generator using current time

    int yourNum, randomNum = rand() % 100 + 1;
    int leftChances = 5;

    do
    {
        cout << "Welcome to the guessing game!" << endl;

        cout << "Please enter a number between 1 and 100: ";
        cin >> yourNum;

        cout << "You guessed: " << yourNum << endl;

        if (yourNum < randomNum)
        {
            cout << "Too low! Try again." << endl;
            leftChances--;
            cout << "You have " << leftChances << " chances left." << endl;
        }
        else if (yourNum > randomNum)
        {
            cout << "Too high! Try again." << endl;
            leftChances--;
            cout << "You have " << leftChances << " chances left." << endl;
        }

    } while (yourNum != randomNum && leftChances > 0);

    if (leftChances > 0)
    {
        cout << "Congratulations! You guessed the correct number: " << randomNum << endl;
    }
    else
    {
        cout << "Sorry! You've run out of chances. The correct number was: " << randomNum << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////
// ✅ EXPLANATION:

// 1. srand(time(0)) - Seeds the random number generator
//    with the current time to ensure different results 
//    every run.

// 2. randomNum = rand() % 100 + 1;
//    Generates a random number between 1 and 100 once
//    before the guessing loop starts.

// 3. The user has 5 chances to guess the number correctly.
//    After each incorrect guess, chances are reduced by 1.

// 4. Based on the user’s guess:
//    - If too low → Show message and reduce chance
//    - If too high → Show message and reduce chance

// 5. The loop continues until:
//    - The user guesses the number correctly, OR
//    - They run out of chances

// 6. Final message depends on whether they guessed
//    the number or not.

// 🧠 Logic Used: Looping + Conditional Statements + Random Numbers
//////////////////////////////////////////////////////

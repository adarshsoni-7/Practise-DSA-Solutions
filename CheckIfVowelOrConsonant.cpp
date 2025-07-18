//  ------------------------------
//        VOWEL OR CONSONANT CHECKER
//  ------------------------------
//  Before jumping into the code, please try it yourself first :)

#include <iostream>
using namespace std;

int main()
{
    char alphabet;

    // Ask the user to input any alphabet
    cout << "Enter any alphabet you want: ";
    cin >> alphabet;

    // -----------------------------------
    // ✅ Approach 1: Multiple OR Conditions
    // -----------------------------------
    // ➤ We manually compare the input with all vowels (both uppercase and lowercase)

    // if (alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' ||
    //     alphabet == 'i' || alphabet == 'I' || alphabet == 'o' || alphabet == 'O' ||
    //     alphabet == 'u' || alphabet == 'U')
    // {
    //     cout << alphabet << " is a vowel";
    // }
    // else
    // {
    //     cout << alphabet << " is a consonant";
    // }

    // -----------------------------------
    // ✅ Approach 2: Using string.find() to check if it's a vowel
    // -----------------------------------
    // ➤ A shorter and cleaner approach using a string of vowels.
    // ➤ string::find() returns the index of character if found; otherwise returns string::npos.

    string vowels = "AEIOUaeiou";

    if (vowels.find(alphabet) != string::npos)
    {
        cout << alphabet << " is a vowel";
    }
    else
    {
        cout << alphabet << " is a consonant";
    }

    return 0;
}

/*
======================= EXPLANATION =======================

💡 Objective:
To check whether the given character is a vowel or a consonant.

📘 English vowels:
  ➤ a, e, i, o, u (both in uppercase and lowercase)

=======================
🔁 Approach 1: Using if-else with multiple conditions
=======================
→ We check if the input matches any of the 10 vowel characters.
→ This method is longer and less readable for beginners but logically correct.

=======================
🔁 Approach 2: Using string.find()
=======================
→ We store all vowels in a single string: "AEIOUaeiou"
→ We use `vowels.find(alphabet)` to check if the character exists in that string.
    - If it **exists**, it will return an index (0, 1, 2...).
    - If it **does not exist**, it will return `string::npos`, meaning not found.
→ This method is cleaner, shorter, and easier to maintain.

✅ Use Approach 2 when you want neat and readable code.
🧠 Tip: `string::npos` is a special constant used to indicate "not found".

*/

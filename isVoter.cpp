//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Part 1

    if (age >= 18)
    {
        cout << "Hello " << name << " you are a valid voter.";
    }

    // else
    // {
    //     cout << "Sorry " << name << " you can't cast the vote.";
    // }

    // Part 2 -- in the else part do changes
 
    else
    {
        int afterYears = 18 - age;

        cout << "You will be eligible to cast the vote after " << afterYears << (afterYears > 1 ? " years" : " year") <<  endl;
    }
    return 0;
}


/*
Explanation of Voter Eligibility Checker:

1. Program Purpose:
   - Checks if someone is eligible to vote (age >= 18)
   - If not eligible, tells them how many years until they can vote

2. Program Inputs:
   - name: Person's name (string)
   - age: Person's current age (integer)

3. How the Program Works:
   Step 1: Get user's name and age
   
   Step 2: Check if age >= 18
          - If true: Person can vote
          - If false: Calculate years until eligibility
   
   Step 3: For ineligible voters:
          Calculate remaining years = 18 - current age
          Example: if age = 15
                  18 - 15 = 3 years remaining

4. Special Feature: Smart Message Formatting
   The program uses a ternary operator (?:) for grammar:
   (afterYears > 1 ? " years" : " year")
   
   This means:
   - If more than 1 year: use plural "years"
   - If exactly 1 year: use singular "year"

5. Examples:
   Input: name = "John", age = 20
   - Is 20 >= 18? Yes!
   - Output: "Hello John you are a valid voter."

   Input: name = "Sarah", age = 15
   - Is 15 >= 18? No!
   - Years remaining = 18 - 15 = 3
   - Output: "You will be eligible to cast the vote after 3 years"

   Input: name = "Tom", age = 17
   - Is 17 >= 18? No!
   - Years remaining = 18 - 17 = 1
   - Output: "You will be eligible to cast the vote after 1 year"

Note:
- The program assumes whole numbers for age
- The minimum voting age (18) is hardcoded
- The ternary operator (? :) is a shortcut for simple if-else
  condition ? value_if_true : value_if_false
*/
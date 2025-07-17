//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int dayNum;
    cout << "Enter the day num: ";

    cin >> dayNum;

    // Approach 1
    if (dayNum >= 1 && dayNum <= 7)
    {
        if (dayNum == 1)
            cout << "Monday";
        else if (dayNum == 2)
            cout << "Tuesday";
        else if (dayNum == 3)
            cout << "Wednesday";
        else if (dayNum == 4)
            cout << "Thursday";
        else if (dayNum == 5)
            cout << "Friday";
        else if (dayNum == 6)
            cout << "Saturday";
        else if (dayNum == 7)
            cout << "Sunday";
    }

    else
        cout << "Invalid day number";

    // Approach 2

    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    if (dayNum >= 1 && dayNum <= 7)
        cout << daysOfWeek[dayNum - 1] << endl;

    else
        cout << "Invalid day number";

    return 0;
}

/*
Explanation of Weekday Printer Program:

1. Program Purpose:
   - Takes a number (1-7) from user
   - Prints corresponding day of the week
   - Shows two different approaches to solve the same problem

2. Approach 1: Using if-else Chain
   - Checks the number one by one
   - If dayNum is 1, print "Monday"
   - If dayNum is 2, print "Tuesday"
   And so on...
   - If none match (not 1-7), print "Invalid day number"

   Advantages:
   - Very straightforward and easy to understand
   - Can easily add custom conditions for each day
   - Good for beginners to understand if-else

   Disadvantages:
   - Lots of repeated code
   - Gets messy with more days
   - More lines of code

3. Approach 2: Using Array
   string daysOfWeek[] = {"Monday", "Tuesday", ...}
   cout << daysOfWeek[dayNum - 1]

   How it works:
   - Creates array where each day is at its position
   - Monday is at index 0
   - Tuesday is at index 1
   - etc.
   - We subtract 1 from dayNum because arrays start at 0

   Advantages:
   - Much shorter code
   - Easier to maintain
   - More efficient
   - Better for experienced programmers

   Disadvantages:
   - Needs understanding of arrays
   - No built-in validation for invalid numbers

4. Examples:
   Input: dayNum = 3
   Approach 1: Checks 1(no) → 2(no) → 3(yes!) → prints "Wednesday"
   Approach 2: daysOfWeek[3-1] = daysOfWeek[2] = "Wednesday"

   Input: dayNum = 1
   Approach 1: Checks 1(yes!) → prints "Monday"
   Approach 2: daysOfWeek[1-1] = daysOfWeek[0] = "Monday"

   Input: dayNum = 9
   Approach 1: Checks all numbers, none match → prints "Invalid day number"
   Approach 2: Will try to access daysOfWeek[8] → Error! (array out of bounds)

Note:
- Array indices start at 0, that's why we subtract 1 from dayNum
- Approach 2 needs error checking to be safe
- Both approaches are valid, choice depends on your needs:
  * Use Approach 1 for better error handling and readability
  * Use Approach 2 for shorter, more maintainable code
*/
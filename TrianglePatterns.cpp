//         =========================================  Dry run once all the patterns before running the code yourself   ==================
#include <iostream>
using namespace std;
int main()
{

    //  Left-Aligned Right-Angled Triangle

    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /* Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to i (number of stars in each row)
       This creates a left-aligned right-angled triangle pattern
    */

    //  Right-Aligned Right-Angled Triangle

    // for (int i = 1; i <= n; i++)
    // {
    //     // First loop: Print spaces for right alignment
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }

    //     // Second loop: Print stars
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl; // Move to next line after each row
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to n - i (number of spaces)
       Third loop (k) runs from 1 to i (number of stars in each row)
       This creates a right-aligned right-angled triangle pattern
    */

    // Inverted Left-Aligned Triangle

    //    for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = i; j <= n; j++)
    //         {
    //             cout << "* ";
    //         }

    //         cout << endl; // Move to next line after each row
    //     }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from i to n (number of stars in each row)
       This creates an inverted left-aligned right-angled triangle pattern
    */

    // Inverted Right-Aligned Triangle

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << "  "; // Print spaces for right alignment
    //     }
    //     for (int k = i; k <= n; k++)
    //     {
    //         cout << "* "; // Print stars
    //     }
    //     cout << endl; // Move to next line after each row
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to i - 1 (number of spaces)
       Third loop (k) runs from i to n (number of stars in each row)
       This creates an inverted right-aligned triangle pattern
    */

    // Full Pyramid


    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n - i; j++) {
    //         cout << " ";
    //     }

    //     for(int k = 1; k <= (2 * i - 1); k++) {
    //         cout << "*";
    //     }
    //     cout << endl; // Move to the next line after each row
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to n - i (number of spaces)
       Third loop (k) runs from 1 to (2 * i - 1) (number of stars in each row)
       This creates a full pyramid pattern
    */

    return 0;
}
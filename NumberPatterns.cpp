#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number for the triangle: ";
    cin >> n;

    /*
    1
    12
    123
    1234
    12345
    */

    // Number Pyramid as Triangle (Medium)

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to i (number of numbers in each row)
       This creates a left-aligned triangle pattern with numbers
    */

    /*
    1
    22
    333
    4444
    55555
    */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to i (number of numbers in each row)
       This creates a left-aligned triangle pattern with numbers
    */

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */

    // int num = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num++ << " ";
    //     }

    //     cout << endl; // Move to next line after each row
    // }

    /*
    Explanation:
    First loop (i) runs from 1 to n (number of rows)
    Second loop (j) runs from 1 to i (number of numbers in each row)
    This creates a left-aligned triangle pattern with increasing numbers
    */

    /*
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
    */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  "; // Print spaces for left alignment
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " "; // Print numbers
    //     }
    //     cout << endl; // Move to next line after each row
    // }

    /*
         Explanation:
         First loop (i) runs from 1 to n (number of rows)
         Second loop (j) runs from 1 to n - i (number of spaces)
         Third loop (k) runs from 1 to i (number of numbers in each row)
         This creates a left-aligned triangle pattern with numbers
    */

    /*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
    */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  "; // Print spaces for left alignment(double space for better alignment)
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " "; // Print numbers
    //     }
    //     cout << endl; // Move to next line after each row
    // }

    /*
       Explanation:
       First loop (i) runs from 1 to n (number of rows)
       Second loop (j) runs from 1 to n - i (number of spaces)
       Third loop (k) runs from 1 to i (number of numbers in each row)
       This creates a left-aligned triangle pattern with numbers
    */

    /*
    12345
    1234
    123
    12
    1
    */



    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers
        }
        cout << endl; // Move to next line after each row
    }
    return 0;
}
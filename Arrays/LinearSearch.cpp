//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    int n;
    int totalSum = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i]; // Calculate sum of all elements
    }

    int k;
    cout << "Which element you want to find in this array: ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << k << " is found at index " << i;
            return 0; // Exit successfully after finding
        }
    }

    cout << k << " is not found in the array";
    return 0; // Exit normally
}

/*
Explanation:
------------
This program performs two tasks:
1. Calculates the sum of all elements in the array.
2. Searches for a specific element k in the array and returns its index if found.

Steps:
1. Input n (number of elements).
2. Take n elements as input and calculate totalSum.
3. Input the element k to search for.
4. Use a loop (linear search):
   - If arr[i] == k → print the index and exit.
   - If loop ends without finding → print "not found".

Important Note:
---------------
We use return 0 for successful execution (standard practice).

Dry Run:
--------
Input:
n = 5
arr = [10, 20, 30, 40, 50]
k = 30

Process:
totalSum = 10+20+30+40+50 = 150
Loop:
i=0 → arr[0]=10 ≠ 30
i=1 → arr[1]=20 ≠ 30
i=2 → arr[2]=30 == 30 → print "30 is found at index 2" and exit.

Output:
30 is found at index 2

Time Complexity: O(n)  (linear search)
Space Complexity: O(1) (no extra array used)
*/

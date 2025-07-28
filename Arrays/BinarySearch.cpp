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

    int low = 0, high = n - 1; // Binary search range: start and end indices

    // Binary Search Loop
    while (low <= high)
    {
        int mid = (low + high) / 2; // Find middle index

        if (arr[mid] == k)
        {
            cout << k << " is at index " << mid << endl;
            return 0; // Exit after finding the element
        }

        // If k is greater than arr[mid], search in right half
        if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else // If k is smaller than arr[mid], search in left half
        {
            high = mid - 1;
        }
    }

    // If element not found after loop ends
    cout << k << " is not found in the array";
    return 0; // Exit normally
}

/*
Explanation:
------------
===========================================                  Important Note!: ARRAY MUST BE SORTED FOR BINARY SEARCH TO WORK                  =========================================
This program:
1. Takes 'n' (size of array) as input.
2. Reads 'n' sorted elements from the user and calculates the sum of all elements.
3. Takes an element 'k' to search for.
4. Uses **Binary Search** to check if 'k' exists in the array and returns its index if found.

Why Binary Search?
-------------------
- Binary search works only on sorted arrays.
- Instead of checking every element (like linear search), it divides the search space in half every time.
- This makes it much faster (O(log n) time).

How Binary Search Works:
-------------------------
1. Set two pointers: `low = 0` (start), `high = n - 1` (end).
2. Repeat until `low <= high`:
   a) Find middle index: `mid = (low + high) / 2`.
   b) If arr[mid] == k → element found → print index → stop.
   c) If arr[mid] < k → element is in the **right half** → set `low = mid + 1`.
   d) If arr[mid] > k → element is in the **left half** → set `high = mid - 1`.
3. If loop ends without finding the element → print "not found".

Why this works:
---------------
Because the array is sorted, we can safely ignore half the elements after each comparison.

Dry Run:
--------
Input:
n = 7
arr = [2, 4, 6, 8, 10, 12, 14]
k = 10

Steps:
low = 0, high = 6
mid = (0+6)/2 = 3 → arr[3] = 8
8 < 10 → search in right half → low = mid+1 = 4

low = 4, high = 6
mid = (4+6)/2 = 5 → arr[5] = 12
12 > 10 → search in left half → high = mid-1 = 4

low = 4, high = 4
mid = (4+4)/2 = 4 → arr[4] = 10 → FOUND at index 4.

Output:
10 is at index 4



*/

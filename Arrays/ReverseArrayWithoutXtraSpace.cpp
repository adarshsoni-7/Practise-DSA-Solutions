#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstIdx = 0, lastIdx = n - 1;

    // Reverse the array using two-pointer approach
    while (firstIdx < lastIdx)
    {
        swap(arr[firstIdx], arr[lastIdx]);
        firstIdx++;
        lastIdx--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Explanation:
------------
This program reverses the entire array using the two-pointer approach.

Steps:
1. Take input size `n` and array elements.
2. Initialize two pointers:
   - `firstIdx` = 0 (start of array)
   - `lastIdx` = n - 1 (end of array)
3. While firstIdx < lastIdx:
   - Swap arr[firstIdx] and arr[lastIdx]
   - Increment firstIdx, Decrement lastIdx
4. Print the reversed array.

Why decrement lastIdx?
-----------------------
Because we want to move from the end towards the center. If we increment it, the loop will never terminate properly and logic will break.

Dry Run:
--------
Input:
n = 5
arr = [1, 2, 3, 4, 5]

Initial: firstIdx = 0, lastIdx = 4
Loop:
swap(arr[0], arr[4]) → [5, 2, 3, 4, 1]
firstIdx = 1, lastIdx = 3
swap(arr[1], arr[3]) → [5, 4, 3, 2, 1]
firstIdx = 2, lastIdx = 2 → Stop

Output:
5 4 3 2 1

Time Complexity: O(n) (Each element swapped once)
Space Complexity: O(1) (No extra array used)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of left rotations you want: ";
    cin >> k;

    if (n < k)
    {
        cout << "The array has minimum k elements to rotate by K positions repeatedly";
        return 0;
    }

    if (n == k)
        cout << "Your array will look like same as it is since k == n which means to rotate n times which results after rotations is same as it is ";

    // If k > n, rotating more than n times is same as rotating k % n times
    k = k % n;

    // Perform k left rotations
    for (int i = 1; i <= k; i++)
    {
        int temp = arr[0]; // Store first element

        // Shift all elements one step to the left
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }

        arr[n - 1] = temp; // Put stored element at last
    }

    // Print rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Explanation:
------------
This program performs LEFT ROTATION of an array by `k` positions.

Steps:
1. Input the size of the array `n` and its elements.
2. Input `k` = number of left rotations.
3. Compute `k = k % n` because rotating an array `n` times results in the same array.
   - Example: For n=5, rotating 7 times = rotating 7 % 5 = 2 times.
4. Repeat the following k times:
   a) Save the first element in `temp`.
   b) Shift all elements one position left.
   c) Place `temp` at the last position.
5. Print the rotated array.

Why k % n?
----------
If k > n, then after every n rotations, the array looks the same.
So we only need to rotate the array `k % n` times for the correct result.

Dry Run:
--------
Input:
n = 5
arr = [1, 2, 3, 4, 5]
k = 7 → k % n = 2 (because 7 % 5 = 2)

Rotation 1:
temp = 1
Shift: [2, 3, 4, 5, 5]
Place temp: [2, 3, 4, 5, 1]

Rotation 2:
temp = 2
Shift: [3, 4, 5, 1, 1]
Place temp: [3, 4, 5, 1, 2]

Output after 2 rotations:
3 4 5 1 2

Time Complexity: O(n * k)  (for each rotation, we shift n elements)
Space Complexity: O(1)     (no extra array used)
*/

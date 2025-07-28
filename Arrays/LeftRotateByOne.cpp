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

    int temp = arr[0]; // Save the first element

    // Shift elements to the left by one position
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp; // Place the saved element at the end

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Explanation:
------------
This program performs a LEFT ROTATION of the array by 1 position.
Steps:
1. Take input size `n` and array elements.
2. Store the first element in `temp` because it will be placed at the end.
3. Shift all elements from index 1 to n-1 one position to the left.
4. Assign `temp` to the last position (arr[n-1]).
5. Print the rotated array.

Dry Run:
--------
Input:
n = 5
arr = [1, 2, 3, 4, 5]

Process:
temp = arr[0] = 1
Loop:
i=1 → arr[0] = arr[1] → [2, 2, 3, 4, 5]
i=2 → arr[1] = arr[2] → [2, 3, 3, 4, 5]
i=3 → arr[2] = arr[3] → [2, 3, 4, 4, 5]
i=4 → arr[3] = arr[4] → [2, 3, 4, 5, 5]
After loop: arr[4] = temp → [2, 3, 4, 5, 1]

Output:
2 3 4 5 1


*/

//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

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

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "The array is not sorted." << endl;
            return 0; // Exit if the array is not sorted
        }
    }

    cout << "The array is sorted." << endl;
    return 0;
}

/*
Explanation of Check If Array is Sorted:
1. Program Purpose:
   - Checks if an array of integers is sorted in ascending order
   - If any element is greater than the next one, it concludes the array is not sorted
2. How the Program Works:
   Step 1: Get the number of elements (n) from user
   Step 2: Create an array of size n
   Step 3: Fill the array with user input
   Step 4: Loop through the array:
            - If current element is greater than next element, print not sorted and exit
   Step 5: If loop completes, print sorted

3. Example:
    If user inputs: 1, 2, 3, 4, 5
    - The program checks pairs: (1,2), (2,3), (3,4), (4,5)
    - All pairs are in order, so it prints "The array is sorted."

    If user inputs: 1, 3, 2, 4
    - It checks (1,3), (3,2) and finds 3 > 2
    - It prints "The array is not sorted."
*/
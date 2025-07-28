//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int *reversedArrFunc(int arr[], int n)
{
    int *reversedArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        reversedArr[i] = arr[n - 1 - i]; // Fill reversed array
    }
    return reversedArr;
}

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

    int *reversedArr = reversedArrFunc(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << reversedArr[i] << " ";
    }
    delete[] reversedArr; // Free the dynamically allocated memory
    return 0;
}

/*
Explanation of Reverse Array Program:
1. Program Purpose:
   - Reverses an array of integers
2. How the Program Works:
   Step 1: Get the number of elements (n) from user
   Step 2: Create an array of size n
   Step 3: Fill the array with user input
   Step 4: Create a second array to hold the reversed elements
   Step 5: Loop through the original array in reverse order and fill the second array
   Step 6: Print the reversed array
3. Example:
    If user inputs: 1, 2, 3, 4, 5
    - Original array becomes: [1, 2, 3, 4, 5]
    - Reversed array becomes: [5, 4, 3, 2, 1]
    - Final output: "Reversed array: 5 4 3 2 1"
*/



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
//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
#include <climits>
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

    int largest = INT_MIN;       // Assume first element is the largest
    int secondLargest = INT_MIN; // Initialize second largest to minimum integer
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest; // Update second largest before largest
            largest = arr[i];        // Update largest if current element is greater
        }
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i]; // Update second largest if current element is between largest and second largest
        }
    }

        cout << "The second largest element in the array is: " << secondLargest << endl;
    return 0;
}

/*
Explanation of Second Largest Element Finder:
1. Program Purpose:
   - Finds the second largest element in an array of integers
2. How it Works:
    Step 1: Get the number of elements (n) from user
    Step 2: Create an array of size n
    Step 3: Fill the array with user input
    Step 4: Initialize largest and secondLargest to minimum integer values
    Step 5: Loop through the array:
             - If current element is greater than largest, update secondLargest and largest
             - If current element is between largest and secondLargest, update secondLargest
    Step 6: Print the second largest element found
3. Example:
    If user inputs: 5, 3, 8, 1, 4
    - Array becomes: [5, 3, 8, 1, 4]
    - largest starts as INT_MIN
    - secondLargest starts as INT_MIN
    - Compare each element:
      - 5 > INT_MIN (update largest to 5)
      - 3 < 5 and > INT_MIN (update secondLargest to 3)
      - 8 > 5 (update secondLargest to 5 and largest to 8)
      - 1 < 5 and < 3 (no change)
      - 4 < 8 and > 5 (update secondLargest to 4)
    - Final output: "The second largest element in the array is: 5"
*/
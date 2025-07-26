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

    int largest = arr[0]; // Assume first element is the largest
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i]; // Update largest if current element is greater
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}

/*
Explanation of Largest Element Finder:
1. Program Purpose:
   - Finds the largest element in an array of integers
2. How it Works:
    Step 1: Get the number of elements (n) from user
    Step 2: Create an array of size n
    Step 3: Fill the array with user input
    Step 4: Initialize largest with the first element of the array
    Step 5: Loop through the array starting from the second element
             - If current element is greater than largest, update largest
    Step 6: Print the largest element found
3. Example:
    If user inputs: 5, 3, 8, 1, 4
    - Array becomes: [5, 3, 8, 1, 4]
    - Largest starts as 5
    - Compare each element:
      - 3 < 5 (no change)
      - 8 > 5 (update largest to 8)
      - 1 < 8 (no change)
      - 4 < 8 (no change)
    - Final output: "The largest element in the array is: 8"
*/
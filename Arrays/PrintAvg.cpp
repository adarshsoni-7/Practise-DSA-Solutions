//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    int totalSum = 0;
    cout << "Enter the number you want: ";

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        totalSum += arr[i]; // Calculate the sum of all elements
    }

    cout << "The average of the array is: " << ((float)totalSum / n) << endl;

    return 0;
}

/*
This program calculates the average of an array of integers.
1. It first takes the size of the array (n) as input.
2. It then initializes an array of size n.
3. It takes n integers as input and stores them in the array while simultaneously calculating the total sum of the elements.
4. Finally, it calculates the average by dividing the total sum by n and prints the result.
*/
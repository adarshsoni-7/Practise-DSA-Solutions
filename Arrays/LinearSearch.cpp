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

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        totalSum += arr[i]; // Calculate the sum of all elements
    }

    int k;

    cout << "Which element you want to find in this array: ";

    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << k << " is at " << i << " index";
            break;
        }
    }
    cout << k << " is not found in the array";
    return -1;
}

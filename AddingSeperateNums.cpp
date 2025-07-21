// ------------------------------
// Before jumping into the code, please try it yourself first
// ------------------------------

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number you want to see in separate form: ";
    cin >> num;

    int divisor = 1;
    int temp = num;

    int totalSum = 0;

    // 🔁 This loop is used to find the highest place value (divisor) of the number
    // For example, if num = 3421, then this loop gives divisor = 1000
    // Reason: Every time we divide temp by 10, we go one digit to the left.
    // So we also multiply divisor by 10 to match that place value.
    // We stop when temp < 10 because now we’re left with the leftmost digit only
    while (temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    // 🔁 Now we extract and print each digit from left to right using the divisor
    // num / divisor → gives the leftmost digit
    // num % divisor → removes that digit from the number
    // divisor / 10 → shifts to the next lower place (like 1000 → 100 → 10 → 1)

    // ❗ Change while condition to (divisor > 0) so that last digit also gets printed
    while (divisor > 0)
    {
        // This adds the current leftmost digit after dividing with correct place value
        totalSum += num / divisor;

        // This removes that digit from the number (e.g., 3421 % 1000 = 421)
        num = num % divisor;

        // This reduces the divisor to next lower place value (e.g., 1000 → 100)
        divisor = divisor / 10;
    }

    cout << "The total sum of given number is " << totalSum << endl;

    return 0;
}

/*

✅ Example Walkthrough for num = 3421:

Iteration	num	  divisor	num / divisor	Output	num % divisor	New num 	New divisor  Total Sum
1	        3421  1000	         3	            3	      421	       421	        100         3
2	        421   100	         4	            4	      21	       21	        10        3 + 4 = 7
3           21	  10	         2	            2	      1	           1	        1         7 +  2 = 9
4	        1	  1              1	            1         0            0	        0 (stop)  9 + 1 =10

*/
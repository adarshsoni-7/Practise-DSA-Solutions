//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number for which you want to know the factors: ";

    cin >> n;

    // Approach 1: Brute Force Method
    // Here we loop from 1 to n and check for each i if it divides n completely (i.e., remainder is 0).
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    // Approach 2: Optimized Method (slightly better)
    // We can loop only till n/2 and print the divisors, because no number greater than n/2 (except n itself)
    // can divide n (e.g., 10 cannot be divided by 6, 7, 8, or 9 without remainder)
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    // At the end, we include the number itself since it always divides itself and above loop is printing till n/2 not till n
    cout << n << " ";

    return 0;
}

/*
📝 Explanation:

This program prints all the factors (or divisors) of a given number `n`.

✔ In **Approach 1**, we use a loop from 1 to n and check if `n % i == 0`. If it is true, then `i` is a factor.
✔ In **Approach 2**, we optimize a bit by only checking up to `n / 2`, because no number greater than n/2
   (except n itself) can divide n.

💡 Even if the number `n` is **odd**, using `n / 2` still works correctly in C++ because `int / int` gives an integer value.
   For example: if n = 9, then n / 2 = 4, and the loop runs from 1 to 4 (which is sufficient).

👉 Finally, we manually print `n` itself, as every number is divisible by itself.
*/

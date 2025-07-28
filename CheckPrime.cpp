//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number you want to check if it is prime: ";

    cin >> n;

    // ---------------------- Approach 1: Count total number of factors ----------------------

    int factorsOfN = 0;

    // for (int i = 1; i <= n; i += 1)
    // {
    //     if (n % i == 0)
    //     {
    //         factorsOfN += 1;
    //     }
    // }

    // if (factorsOfN == 2)
    // {
    //     cout << "Given number is a prime";
    //     return 0;
    // }
    // else
    // {
    //     cout << "Given number is not a prime";
    //     return 0;
    // }

    // // ---------------------- Approach 2: Better ne - Check only up to n/2 ----------------------

    // if (n <= 1)
    // {
    //     cout << n << " is  a prime number";
    //     return 0;
    // }

    // bool isPrime = true;

    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime)
    // {
    //     cout << "Prime Number";
    // }
    // else
    // {
    //     cout << "Not a prime number";
    // }

    // // ---------------------- Approach 3: Optimized - Check only up to √n ----------------------

    //     if (n <= 1) {cout << "Not prime number"; return 0;}
    //     if(n == 2) {cout << "Prime number"; return 0;}

    //     if(n % 2 == 0) {cout << "Not prime number"; return 0;}

    //     for (int i = 3; i <= sqrt(n); i += 2)
    //     {
    //         if (n % i == 0)
    //         {
    //             cout << n << " is not a prime number";
    //             return 0;
    //         }
    //     }

    //     cout << n << " is a prime number";

    //     return 0;
}

/*
----------------------------------------------------------------------------------------------------
EXPLANATION:

✅ We used **two approaches** to check whether a given number `n` is a prime or not.

🟢 Approach 1: Brute Force (Count Factors)
- A number is **prime** if it has exactly 2 factors: 1 and itself.
- We check for all values from 1 to n, and count how many numbers divide `n` fully.
- If the total count of such divisors is exactly 2, then it's a prime number.
- Time Complexity: O(n)


🟢 Approach 2: Better looping upton n/2
Why i <= n/2 works:
Any number n cannot have a factor greater than n/2 other than n itself.

For example:

For n = 8, potential factors other than 1 and 8 are 2, 4 (both ≤ 4).

So if no number between 2 and n/2 divides n, then n must be prime.

- So instead of checking till n, we check only up to n/2, which is slight faster.
- If any number in this range divides `n`, then it's not prime.
- Else, it's a prime.
- Time Complexity: O(n/2)

🟢 Approach 3: Optimized using Square Root
- A number is NOT prime if it is divisible by 2 initially.
- A number is NOT prime if it is divisible by any number from 2 to √n.
- So instead of checking till n, we check only up to sqrt(n), which is much faster.
- If any number in this range divides `n`, then it's not prime.
- Else, it's a prime.
- Time Complexity: O(√n)



📌 NOTE: If `n <= 1`, it is not a prime number by definition.

----------------------------------------------------------------------------------------------------
*/

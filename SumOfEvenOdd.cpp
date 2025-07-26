//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    int n;

    int evenSum = 0, oddSum = 0;

    cout << "Upto which number you want to see even and odd and then thier sum: ";

    cin >> n;

    for (int i = 1; i <= n; i += 1)
    {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    cout << "The sum of all even numbers till given num is: " << evenSum << " and of odd is: " << oddSum << endl;

    return 0;
}

/*
------------------------------------  EXPLANATION  ------------------------------------

👉 This program calculates the sum of all even and odd numbers from 1 to a given number `n`.

✔ Step-by-step:
1. We take the number `n` as input from the user.
2. We initialized two variables: `evenSum` and `oddSum` as 0.
3. We used a `for` loop because:
   - ✅ We **know where to start** (from 1)
   - ✅ We **know where to stop** (at `n`)
   - ✅ We **know the step/increment** (i.e., `i += 1`)
   This makes `for` loop a perfect fit here — simple and clean for known ranges.
4. Inside the loop, we check whether `i` is even or odd:
   - If `i % 2 == 0`, it’s even → add to `evenSum`
   - Else, it’s odd → add to `oddSum`
5. After the loop ends, we print both sums.

📌 Example:
If user enters `5`, the loop does:
- i = 1 → odd → oddSum = 1
- i = 2 → even → evenSum = 2
- i = 3 → odd → oddSum = 1 + 3 = 4
- i = 4 → even → evenSum = 2 + 4 = 6
- i = 5 → odd → oddSum = 4 + 5 = 9

Final output:
`The sum of all even numbers till given num is: 6 and of odd is: 9`

---------------------------------------------------------------------------------------
*/

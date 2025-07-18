//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorialOfN = 1;

    cout << "Which number's factorial you would like to see: ";

    cin >> n;

    while (n > 0)
    {
        factorialOfN *= n;
        n -= 1;
    }

    cout << "The factorial of given number is: " << factorialOfN << endl;

    return 0;
}

/*
------------------------------------  EXPLANATION  ------------------------------------

👉 This program calculates the factorial of a given number using a `while` loop.

✔ Step-by-step:
1. We take input `n` from the user.
2. We initialized a variable `factorialOfN` as 1, because factorial multiplication starts with 1.
3. We used a `while` loop because:
   - ✅ We **know where to start** (from `n`)
   - ✅ We **know where to stop** (`n > 0`)
   - ✅ We **know how to move** (by decreasing `n` each time)
   That's why using a `while` loop is more meaningful and clear in this case.
4. Inside the loop, we multiply `factorialOfN` by `n` and then decrement `n` by 1.
5. Once `n` becomes 0, the loop stops and we print the result.

📌 Example:
If user enters `5`, the loop works like this:
→ 1 × 5 = 5
→ 5 × 4 = 20
→ 20 × 3 = 60
→ 60 × 2 = 120
→ 120 × 1 = 120

Final output: `The factorial of given number is: 120`

🧠 Note:
We use `long long` for `factorialOfN` because factorial values grow very fast.

---------------------------------------------------------------------------------------
*/

//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number which you want to check if it is automorphic: ";
    cin >> n;

    int sqOfN = n * n;   // Step 1: Get square of the number
    int cntOfN = 0;      // This will store the number of digits in the original number
    int originalNum = n; // Store original number for final comparison

    // Step 2: Count digits in the original number
    while (n > 0)
    {
        cntOfN += 1;
        n /= 10;
    }

    // Step 3: Calculate 10^cntOfN to extract last cntOfN digits from square
    int power = 1;
    for (int i = 1; i <= cntOfN; i += 1)
    {
        power *= 10; // Example: If cntOfN = 3 → power = 1000
    }

    // Step 4: Extract last 'cntOfN' digits of the square
    int lastDigits = sqOfN % power; // Example: 390625 % 1000 = 625

    // Step 5: Compare the last digits of square with original number
    if (lastDigits == originalNum)
    {
        cout << "Automorphic";
    }
    else
    {
        cout << "Not automorphic";
    }

    return 0;
}

/*
------------------📝 Explanation ------------------

👉 Goal: Check whether a number is **automorphic**, i.e., whether its square ends with the same digits as the number itself.

🧠 Step-by-step logic:

1. **Square the number.**
   - Example: For `n = 625`, we compute `sqOfN = 625 * 625 = 390625`.

2. **Count the number of digits in the original number.**
   - 625 has 3 digits, so we store `cntOfN = 3`.

3. **Extract the last 'cntOfN' digits from the square.**
   - Since we want last 3 digits, we compute `390625 % 1000 = 625`.

   ✅ This uses the trick:
   
- This works because in **decimal (base-10)**, `10^d` always gives a divisor to extract last `d` digits.
- That's why we use `power = 1`, and then multiply by 10 `cntOfN` times.

4. **Compare extracted last digits with original number.**
- If equal → Automorphic
- Else → Not Automorphic

📌 Example:
- `n = 625 → 625^2 = 390625`
- Last 3 digits of 390625 = 625
- ✅ So it's automorphic

- `n = 45 → 45^2 = 2025`
- Last 2 digits of 2025 = 25 ≠ 45
- ❌ So not automorphic

✅ This code is already optimal in both time and space, with clean logic.

*/

//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    int n, totalSum = 0;

    cout << "Upto which terms you want sum: ";
    cin >> n;

    // ----------------------- Approach 1 (Using loop) -----------------------
    // for (int i = 1; i <= n; i += 1)
    // {
    //     totalSum += i;
    // }

    // ----------------------- Approach 2 (Using formula) -----------------------
    totalSum = n * (n + 1) / 2;

    cout << "The sum to given terms is " << totalSum << endl;
    return 0;
}

/*
-------------------- EXPLANATION --------------------

👉 Purpose of this program:
To calculate the sum of first 'n' natural numbers.

✅ Two approaches are used:

🔹 Approach 1: Using Loop
- Run a loop from 1 to n.
- In each iteration, add the value of `i` to `totalSum`.
- Time Complexity: O(n) — because loop runs n times.

🔹 Approach 2: Using Formula
- Formula for sum of first `n` natural numbers is:
    sum = n * (n + 1) / 2
- This method avoids loops and gives the result directly.
- Time Complexity: O(1) — constant time, optimal.

⚠️ Notes:
- Natural numbers start from 1, so input should be n ≥ 1.
- For invalid input (like n < 1), you can add input validation if needed.

✅ Final Output:
The sum of first 'n' terms is printed based on the chosen approach.

------------------------------------------------------
*/

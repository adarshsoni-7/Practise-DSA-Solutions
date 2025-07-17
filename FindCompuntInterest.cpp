//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <bits/stdc++.h>
using namespace std;
int calculateCompoundInterest(int principalAmt, int interestRate, int time)
{
    float A = principalAmt * pow((1 + interestRate / 100.0), time);
    float CI = A - principalAmt;

    return CI;
}
int main()
{
    int principalAmt, interestRate, time;

    cout << "Enter your amount: ";
    cin >> principalAmt;

    cout << "Enter your interest rate(in %): ";
    cin >> interestRate;

    cout << "Enter your time(in years): ";
    cin >> time;

    int compountInterest = calculateCompoundInterest(principalAmt, interestRate, time);
    cout << "The compound interest is : " << compountInterest << endl;
    return 0;
}

/*
Explanation of Compound Interest Calculator:

1. What is Compound Interest?
   - It's interest calculated on both the initial principal amount AND the accumulated interest
   - Think of it as "interest on interest"

2. The Program Takes 3 Inputs:
   - Principal Amount (P): The initial money you invest/borrow
   - Interest Rate (r): The yearly interest rate (in percentage)
   - Time (t): Number of years

3. How the Calculation Works:
   Step 1: Calculate Amount (A) using formula:
   A = P * (1 + r/100)^t
   - P is principal amount
   - r/100 converts percentage to decimal
   - ^ t means raised to power of time

   Step 2: Calculate Compound Interest (CI):
   CI = A - P
   (Total amount minus the principal gives us the interest earned)

4. Example:
   If P = 1000, r = 10%, t = 2 years
   A = 1000 * (1 + 10/100)^2
   A = 1000 * (1.1)^2
   A = 1000 * 1.21
   A = 1210
   CI = 1210 - 1000 = 210

Note: The program returns an integer value, so decimal places are truncated.
*/
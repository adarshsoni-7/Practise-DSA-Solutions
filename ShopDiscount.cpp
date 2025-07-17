//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int totalPrice;

    cout << "Enter your total price: ";

    cin >> totalPrice;

    if (totalPrice <= 999)
    {
        cout << "You have no access to discount :(";
    }

    else if (totalPrice >= 1000 && totalPrice <= 4999)
    {
        totalPrice = totalPrice - (totalPrice * 0.1); // 10% discount
        cout << "Your price after discount is : " << totalPrice << endl;
    }

    else if (totalPrice >= 5000 && totalPrice <= 9999)
    {
        totalPrice = totalPrice - (totalPrice * 0.2); // 20% discount
        cout << "Your price after discount is : " << totalPrice << endl;
    }

    else if (totalPrice >= 10000)
    {
        totalPrice = totalPrice - (totalPrice * 0.3); // 30% discount
        cout << "Your price after discount is : " << totalPrice << endl;
    }

    return 0;
}



/*
========================= EXPLANATION =========================

🛍️ Objective:
We want to calculate a discount based on the user's total shopping price.

📦 Discount Rules:
--------------------------------------------------------------
| Price Range           | Discount Given                    |
|------------------------|----------------------------------|
| 0 - 999                | ❌ No discount                    |
| 1000 - 4999            | ✅ 10% discount                  |
| 5000 - 9999            | ✅ 20% discount                  |
| 10000 and above        | ✅ 30% discount                  |
--------------------------------------------------------------

📌 How it works:
- We use `if-else` conditions to check which range the `totalPrice` falls in.
- Based on the range, we subtract the discount percentage from `totalPrice`.
- The discount is calculated using:
    totalPrice = totalPrice - (totalPrice * discountRate);
  For example: if price is 2000 → 2000 - 2000*0.1 = 1800

🧠 Note:
- 0.1 means 10%, 0.2 means 20%, etc.
- If we write 10 / 100 instead of 0.1, we must use `10.0 / 100` to avoid integer division.
- Always test your code with different inputs to verify all cases!

*/



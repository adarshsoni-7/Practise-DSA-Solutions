//  ------------------------------
//      ELECTRICITY BILL CALCULATOR
//  ------------------------------
//  Before jumping into the code, please try it first yourself :)

#include <iostream>
using namespace std;

int main()
{
    int totalUnits;
    int totalAmtToPay = 0;

    cout << "Enter your total units of house: ";
    cin >> totalUnits;

    // ------------------------------
    // 🔁 Approach 1: Direct condition-based calculation
    // ------------------------------
    // ➤ We calculate the bill slab-wise based on where the total units fall.
    // ➤ For each slab, we add the fixed slab values and the remaining extra units.

    if (totalUnits <= 100)
    {
        totalAmtToPay += totalUnits * 4.2;
    }

    else if (totalUnits >= 101 && totalUnits <= 200)
    {
        totalAmtToPay += 100 * 4.2 + (totalUnits - 100) * 6;
    }

    else if (totalUnits >= 201 && totalUnits <= 400)
    {
        totalAmtToPay += 100 * 4.2 + 100 * 6 + (totalUnits - 200) * 8;
    }

    else if (totalUnits > 400)
    {
        totalAmtToPay += 100 * 4.2 + 100 * 6 + 200 * 8 + (totalUnits - 400) * 13;
    }

    // ------------------------------
    // 🔁 Approach 2: Reverse slab-wise breakdown
    // ------------------------------
    // ➤ This approach breaks down the bill in reverse — from highest slab to lowest.
    // ➤ For each slab, we subtract units used in that slab and move to the next one.

    // 👇 Starting again from scratch to avoid overlapping with Approach 1
    totalAmtToPay = 0; // Reset amount to test second method

    if (totalUnits > 400)
    {
        totalAmtToPay += (totalUnits - 400) * 13; // Units above 400
        totalUnits = 400; // Only 400 left for further slabs
    }

    if (totalUnits >= 201 && totalUnits <= 400)
    {
        totalAmtToPay += (totalUnits - 200) * 8; // Units between 201–400
        totalUnits = 200;
    }

    if (totalUnits >= 101 && totalUnits <= 200)
    {
        totalAmtToPay += (totalUnits - 100) * 6; // Units between 101–200
        totalUnits = 100;
    }

    if (totalUnits <= 100)
    {
        totalAmtToPay += totalUnits * 4.2; // Units from 0–100
    }

    cout << "You have to pay " << totalAmtToPay << "/- within 15 days" << endl;

    return 0;
}



/*
============================== EXPLANATION ==============================

💡 Objective:
To calculate the electricity bill amount based on total units consumed.

🧾 Slab-wise charges:
-----------------------------------------------
| Units Range           | Rate per Unit (₹)   |
|------------------------|--------------------|
| 0 - 100                | 4.20               |
| 101 - 200              | 6.00               |
| 201 - 400              | 8.00               |
| Above 400              | 13.00              |
-----------------------------------------------

==============================
🔁 APPROACH 1: Direct Conditions
==============================
→ This method checks the slab range where `totalUnits` fall.
→ Based on that, it calculates bill for all previous slabs and adds the remaining units.

✅ Example:
If totalUnits = 300:
- First 100 units → 100 * 4.2
- Next 100 units → 100 * 6
- Remaining 100 units → 100 * 8

==============================
🔁 APPROACH 2: Reverse Breakdown
==============================
→ This method starts from the top slab (above 400) and goes down.
→ For each range, it deducts slab units and moves backward.

✅ Example:
If totalUnits = 750:
- Units above 400 = 350 → 350 * 13
- 200 units → 200 * 8
- 100 units → 100 * 6
- 100 units → 100 * 4.2

🧠 Why Approach 2 is helpful:
- It breaks the logic into smaller chunks.
- Works well when total units are very high and avoids overlapping logic.

✅ Both approaches give the same result when implemented correctly.
✅ Approach 2 is generally more flexible and avoids deep nesting.

*/

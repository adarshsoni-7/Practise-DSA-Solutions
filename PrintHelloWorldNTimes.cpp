//  ------------------------------
//      HELLO WORLD N TIMES
//  ------------------------------
//  Before jumping into the code, please try it yourself first :)

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask the user how many times to print "Hello World"
    cout << "Enter the number of how many times you want to print Hello World: ";
    cin >> n;

    // --------------------------------------------
    // ✅ First for-loop method:
    // i starts from 1, ends at n (inclusive), i += 1 means i++
    // For example, if n = 5 → prints 5 times from i = 1 to 5
    // --------------------------------------------

    for (int i = 1; i < n + 1; i += 1)
    {
        cout << "Hello World!" << endl;
    }

    // --------------------------------------------
    // ✅ Second for-loop method (more common):
    // i starts from 0, ends before n → i = 0 to i < n
    // Same output, prints "Hello World!" n times
    // --------------------------------------------

    for (int i = 0; i < n; i++)
    {
        cout << "Hello World!" << endl;
    }

    return 0;
}

/*
======================= EXPLANATION =======================

💡 Objective:
To print "Hello World!" multiple times based on user input.

🛠️ Loop Type Used:
→ We are using a **for loop** because:
   ✅ We know:
     - From where to start (initialization: i = 0 or i = 1)
     - Where to stop (condition: i < n or i <= n)
     - How to go (increment: i++ or i += 1)
→ This makes the `for loop` ideal for repeating a task a known number of times.

=======================
🔁 Two valid loop variations:
=======================

1️⃣ `for (int i = 1; i < n + 1; i++)`
    → Starts from 1 and ends at n (inclusive)
    → Prints "Hello World!" exactly n times

2️⃣ `for (int i = 0; i < n; i++)`
    → Starts from 0 and ends before n
    → Also prints "Hello World!" n times

🧠 Tip:
Both variations are correct and commonly used depending on indexing needs.

✅ Use `for` loop when the number of iterations is known before entering the loop.

*/

//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the first number : ";
    cin >> num1;

    int num2;
    cout << "Enter the second number : ";
    cin >> num2;

    // First Approach
    swap(num1, num2);

    // Second Approach
    int num3 = num1; // num1 is 5 so num3 = 5
    num1 = num2; // num2 is 3 so num1 = 3
    num2 = num3; // num2 = 5

    // Third Approach (Without using third variable)

    num1 = num1 + num2; // 5 + 3 = 8
    num2 = num1 - num2; // 8 - 3 = 5
    num1 = num1 - num2; // 8 - 5 = 3

    cout << "First number is : " << num1 << " and the second number is " << num2 << endl;
    return 0;
}

/*
Explaination:

Approach 1: With the help of CPP built-in function we swapped the numbers.

Approach 2: First we assigned the num1 to num3 so that it can be assigned to another in future, then we assigned num2 to num1 and then lastly we assigned num3 to num2. Since num3 has num1 now so num2 becomes num1.

Approahch 3: First we addded the num1 + num2 then simply by subtracting it with num1 and num2 respectively we get the swapped numbers

Why this happpens is the main question ?

To swap two numbers without using a third variable, we can use arithmetic operators (addition and subtraction). Here's how it works:

First step: num1 = num1 + num2

This stores the sum of both numbers in num1
Second step: num2 = num1 - num2

num1 has (original_num1 + original_num2)
So, num2 becomes (original_num1 + original_num2) - original_num2 = original_num1
Third step: num1 = num1 - num2

num1 has (original_num1 + original_num2)
num2 now has original_num1
So, num1 becomes (original_num1 + original_num2) - original_num1 = original_num2
Example: If num1 = 5 and num2 = 3:

num1 = 5 + 3 = 8
num2 = 8 - 3 = 5
num1 = 8 - 5 = 3
And thus the numbers are swapped! 
*/
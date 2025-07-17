//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the first number : ";
    cin >> num1;

    int num2;
    cout << "Enter the second number : ";
    cin >> num2;

    int result = num1 + num2;

    cout << "The addition of two numbers is : " << result << endl;
    return 0;
}

/*
Explaination:  We first of all declare two variables num1 and num2 as first and second numbers then we could directly print the result by cout << "The addition of two numbers is : num1 + num2 << endl; but we here stored in the variable so that it can be reuse in future if needed.
 */
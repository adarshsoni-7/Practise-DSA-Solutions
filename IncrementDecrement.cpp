//  ------------------------------             Before jumping into the code, please try it first yourself   -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int a = 5;

    int b = 6;

    int c = ++a + b++;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}

/*
 -------------------                   Explaination:         --------------------------

Variable a is incremented before its value is used, so ++a becomes 6.
Variable b is incremented after its value is used, so b++ is 6 during the calculation, then becomes 7.
c is calculated as 6 (new value of a) + 6 (original value of b) = 12.
The output is:
a = 6
b = 7
c = 12

This illustrates the difference between pre-increment and post-increment operators.

*/
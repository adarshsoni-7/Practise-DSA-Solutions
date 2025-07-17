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


/* Try Yourself these questions : 

1. What will be the output?
int x = 10;
int y = x++ + ++x;
cout << x << " " << y << endl;

2. Predict the output:
int a = 3, b = 4;
int c = a++ + b-- + --a;
cout << a << " " << b << " " << c << endl;

3. What does this print?
int p = 7;
int q = p-- - ++p;
cout << p << " " << q << endl;

4. Find the output:
int m = 2, n = 5;
int result = ++m * n--;
cout << m << " " << n << " " << result << endl;

5. What is the result?
int i = 1;
int j = i++ + i++ + ++i;
cout << i << " " << j << endl;

6. What will be printed?
int a = 8;
int b = --a + a++;
cout << a << " " << b << endl;

7. Predict the output:
int x = 4, y = 6;
int z = x++ + y++ + --y;
cout << x << " " << y << " " << z << endl;

8. What does this code output?
int a = 5;
int b = a++ - --a + ++a;
cout << a << " " << b << endl;

9. Find the output:
int m = 9;
int n = m++ + m++ + m++;
cout << m << " " << n << endl;

10. What is the output?
int x = 2, y = 3;
int z = ++x + ++y + x++ + y++;
cout << x << " " << y << " " << z << endl;

*/
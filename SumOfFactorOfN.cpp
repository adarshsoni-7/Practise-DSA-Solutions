//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int n, sumOfFactors = 0;

    cout << "Enter the number for which you want to know the factors: ";

    cin >> n;


    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sumOfFactors += i;
        }
    }
    cout << endl;


    cout << "The addition of factors of given number is: " << sumOfFactors << endl;

    return 0;
}


// Explaination of how to find the factorial of a number by three approaches is in the FactorOfN.cpp file and here is the only its addition & nothing more.
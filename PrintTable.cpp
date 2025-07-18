//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Which multiplication table do you want: ";
    cin >> number;

    for (int i = 1; i <= 10; i += 1)
    {
        cout << number * i << endl;
    }
}


// Very Simple no need to be explained
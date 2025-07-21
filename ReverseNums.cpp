//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number which you want to be reversed: ";

    cin >> num;

    while (num > 0)
    {
        cout << num % 10;

        num = num / 10;
    }

    return 0;
}


/* The intution is very straight-forward that we keep extracting last digit by moduling num by 10 and priting and by divind it with 10 we get the  rest of the numeer. */
//  ------------------------------
//  Before jumping into the code, please try it yourself first
//  -----------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;

    cout << "Enter the name: ";

    cin >> name;

    do
    {
        cout << "Hello";
    } while (name != "Adarsh");

    return 0;
}

/*     ------------------📝 Explanation ------------------

Simple logic that untill & unless the name is Adarsh the loop will not be stopped and once you type Adarsh, even though it is equal but still Hello prints once because in do-while loop the task is first done and then the condition will check.

*/
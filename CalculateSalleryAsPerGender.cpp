//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

int main()
{
    char gender;
    int serviceOfyrs;
    string qualifications;

    cout << "Which gender you are in: ";
    cin >> gender;

    cout << "Years of Service: ";
    cin >> serviceOfyrs;

    cout << "What are your qualifications: ";
    cin >> qualifications;

    // Checking conditions based on gender, service years, and qualification
    if (gender == 'm' || gender == 'M')
    {
        if ((serviceOfyrs >= 10) && (qualifications == "Post-Graduate" || qualifications == "post-graduate"))
        {
            cout << "Your salary will be: " << 15000 << endl;
        }
        else if ((serviceOfyrs >= 10) && (qualifications == "Graduate" || qualifications == "graduate"))
        {
            cout << "Your salary will be: " << 10000 << endl;
        }
        else if ((serviceOfyrs < 10) && (qualifications == "Post-Graduate" || qualifications == "post-graduate"))
        {
            cout << "Your salary will be: " << 10000 << endl;
        }
        else if ((serviceOfyrs < 10) && (qualifications == "Graduate" || qualifications == "graduate"))
        {
            cout << "Your salary will be: " << 7000 << endl;
        }
    }
    else if (gender == 'f' || gender == 'F')
    {
        if ((serviceOfyrs >= 10) && (qualifications == "Post-Graduate" || qualifications == "post-graduate"))
        {
            cout << "Your salary will be: " << 12000 << endl;
        }
        else if ((serviceOfyrs >= 10) && (qualifications == "Graduate" || qualifications == "graduate"))
        {
            cout << "Your salary will be: " << 9000 << endl;
        }
        else if ((serviceOfyrs < 10) && (qualifications == "Post-Graduate" || qualifications == "post-graduate"))
        {
            cout << "Your salary will be: " << 10000 << endl;
        }
        else if ((serviceOfyrs < 10) && (qualifications == "Graduate" || qualifications == "graduate"))
        {
            cout << "Your salary will be: " << 6000 << endl;
        }
    }
    else
    {
        cout << "Invalid Gender";
    }

    return 0;
}

//
// -------------------------------- Explanation --------------------------------

// This program calculates salary based on three inputs: gender, years of service, and qualification.
//
// ➤ First, it takes inputs: gender ('M' or 'F'), years of service (int), and qualifications ("Graduate" or "Post-Graduate").
// ➤ Then, based on this data, it checks the following conditions:
//
// If the gender is male:
//     - If service >= 10 and qualification is PG → salary = 15000
//     - If service >= 10 and qualification is Graduate → salary = 10000
//     - If service < 10 and qualification is PG → salary = 10000
//     - If service < 10 and qualification is Graduate → salary = 7000
//
// If the gender is female:
//     - If service >= 10 and qualification is PG → salary = 12000
//     - If service >= 10 and qualification is Graduate → salary = 9000
//     - If service < 10 and qualification is PG → salary = 10000
//     - If service < 10 and qualification is Graduate → salary = 6000
//
// ➤ If an invalid gender is entered, it prints "Invalid Gender".
//
// ✔ Note: Qualification string matching is case-sensitive, so we accept both "Graduate"/"graduate" and "Post-Graduate"/"post-graduate".
//

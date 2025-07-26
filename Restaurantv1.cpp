//  ------------------------------             Before jumping into the code, please try it yourself first  -----------------------------

#include <iostream>
using namespace std;

// Function to get dish name input with proper buffer handling
string getDishName()
{
    string name;
    cin.ignore(); // clear input buffer
    getline(cin, name);
    return name;
}

int main()
{

    string region, dishType;

    do
    {
        cout << "Choose your region: " << endl;
        cout << "1. North India" << endl;
        cout << "2. South India" << endl;
        cout << "3. East India" << endl;
        cout << "4. West India" << endl;
        cout << "5. Exit" << endl;

        cout << "Please enter the number corresponding to your choice: ";
        cin >> region;

        cout << "Choose your dish type: " << endl;
        cout << "1. Starters" << endl;
        cout << "2. Main Course" << endl;
        cout << "3. Desserts" << endl;
        cout << "4. Beverages" << endl;
        cout << "5. Exit" << endl;
        cout << "Please enter the number corresponding to your choice: ";

        cin >> dishType;

        if (region == "1" && dishType == "1")
        {
            cout << "You have chosen North Indian Starters." << endl;
            cout << "1.Aloo Pakori" << endl;
            cout << "2.Paneer Tikka" << endl;
            cout << "3.Chole Bhature" << endl;
            cout << "4.Pakoras" << endl;
        }

        else if (region == "1" || dishType == "2")
        {
            cout << "You have chosen North Indian Main Course." << endl;
            cout << "1.Biryani" << endl;
            cout << "2.Rogan Josh" << endl;
            cout << "3.Dal Makhani" << endl;
            cout << "4.Palak Paneer" << endl;
        }
        else if (region == "1" && dishType == "3")
        {
            cout << "You have chosen North Indian Desserts." << endl;
            cout << "1.Gulab Jamun" << endl;
            cout << "2.Kheer" << endl;
            cout << "3.Rasgulla" << endl;
            cout << "4.Jalebi" << endl;
        }
        else if (region == "1" && dishType == "4")
        {
            cout << "You have chosen North Indian Beverages." << endl;
            cout << "1.Lassi" << endl;
            cout << "2.Chai" << endl;
            cout << "3.Masala Chai" << endl;
            cout << "4.Filter Coffee" << endl;
        }
        else if (region == "2" && dishType == "1")
        {
            cout << "You have chosen South Indian Starters." << endl;
            cout << "1.Idli" << endl;
            cout << "2.Dosa" << endl;
            cout << "3.Vada" << endl;
            cout << "4.Upma" << endl;
        }
        else if (region == "2" && dishType == "2")
        {
            cout << "You have chosen South Indian Main Course." << endl;
            cout << "1.Sambar Rice" << endl;
            cout << "2.Biryani" << endl;
            cout << "3.Rasam Rice" << endl;
            cout << "4.Curd Rice" << endl;
        }
        else if (region == "2" && dishType == "3")
        {
            cout << "You have chosen South Indian Desserts." << endl;
            cout << "1.Payasam" << endl;
            cout << "2.Rasgulla" << endl;
            cout << "3.Sweet Pongal" << endl;
            cout << "4.Mysore Pak" << endl;
        }
        else if (region == "2" && dishType == "4")
        {
            cout << "You have chosen South Indian Beverages." << endl;
            cout << "1.Filter Coffee" << endl;
            cout << "2.Buttermilk" << endl;
            cout << "3.Tender Coconut Water" << endl;
            cout << "4.Chaas" << endl;
        }
        else if (region == "3" && dishType == "1")
        {
            cout << "You have chosen East Indian Starters." << endl;
            cout << "1.Macher Jhol" << endl;
            cout << "2.Prawn Curry" << endl;
            cout << "3.Mutton Korma" << endl;
            cout << "4.Chingri Bhorta" << endl;
        }
        else if (region == "3" && dishType == "2")
        {
            cout << "You have chosen East Indian Main Course." << endl;
            cout << "1.Chingri Malai Curry" << endl;
            cout << "2.Mutton Curry" << endl;
            cout << "3.Bhetki Paturi" << endl;
            cout << "4.Macher Matha Diye Khichuri" << endl;
        }
        else if (region == "3" && dishType == "3")
        {
            cout << "You have chosen East Indian Desserts." << endl;
            cout << "1.Mithai" << endl;
            cout << "2.Rasgulla" << endl;
            cout << "3.Sandesh" << endl;
            cout << "4.Patishapta" << endl;
        }
        else if (region == "3" && dishType == "4")
        {
            cout << "You have chosen East Indian Beverages." << endl;
            cout << "1.Chai" << endl;
            cout << "2.Lassi" << endl;
            cout << "3.Mango Lassi" << endl;
            cout << "4.Tender Coconut Water" << endl;
        }
        else if (region == "4" && dishType == "1")
        {
            cout << "You have chosen West Indian Starters." << endl;
            cout << "1.Vada Pav" << endl;
            cout << "2.Pav Bhaji" << endl;
            cout << "3.Dhokla" << endl;
            cout << "4.Pani Puri" << endl;
        }
        else if (region == "4" && dishType == "2")
        {
            cout << "You have chosen West Indian Main Course." << endl;
            cout << "1.Thali" << endl;
            cout << "2.Biryani" << endl;
            cout << "3.Puran Poli" << endl;
            cout << "4.Batata Vada" << endl;
        }
        else if (region == "4" && dishType == "3")
        {
            cout << "You have chosen West Indian Desserts." << endl;
            cout << "1.Gulab Jamun" << endl;
            cout << "2.Rasgulla" << endl;
            cout << "3.Kaju Katli" << endl;
            cout << "4.Barfi" << endl;
        }
        else if (region == "4" && dishType == "4")
        {
            cout << "You have chosen West Indian Beverages." << endl;
            cout << "1.Chai" << endl;
            cout << "2.Lassi" << endl;
            cout << "3.Masala Chai" << endl;
            cout << "4.Filter Coffee" << endl;
        }
        else if (region == "5" && dishType == "5")
        {
            cout << "Exiting the program. Thank you!" << endl;

            return 0;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }

    }

    while (region != "5" && dishType != "5");
}

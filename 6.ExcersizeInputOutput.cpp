// Take first name , last name and adress as input and display them

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f_name, l_name, adress;

   

    cout<< "Please enter First name\n";
    cin >> f_name;
    cout << "Please enter last name\n";
    cin >> l_name;

    // ignore newline from stream so that getline works fine -- important to observe the reason behind it.
    cin.ignore();


    cout << "PLease enter adress in one line\n";
    getline(cin,adress);
    
    cout << "Your Details are here:\n";
    cout << f_name <<endl << l_name << endl << adress;


    return 0;
}

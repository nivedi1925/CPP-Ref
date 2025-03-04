#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_line, second_line;

    cout << " Please enter the first line\n";
    getline(cin,first_line);

    cout << "Please enter the second line\n";
    getline(cin,second_line);

    // prints the difference (0-- for same string)
    cout << first_line.compare(second_line);



    return 0;
}


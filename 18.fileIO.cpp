#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // create write object

    ofstream op("test.txt"); //creates file if not exist
    op << "This text will be written";
    op.close();
    cout << "Successful\n";



    // read from file

    ifstream ip("test.txt"); // error if not exist
    char ch;
    while(!ip.eof())
    {
        cout << ch;
        ip >> ch;

    }

    ip.close();




    return 0;
}

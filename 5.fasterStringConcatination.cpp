#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a = "Hello ";
    string b = "World\n";


    // First method of concatination but which is more time comsuming in terms of cpu cycles
    string c = a+b;
    cout << c << endl;



    // Second method this is faster in terms of cpu cycles
    c = a.append(b);
    cout << c;

}

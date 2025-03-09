#include <iostream>
#include <string>
using namespace std;


int main()
{
    int a=3,b=2;
    string msg = " Sum of the numbers = ";

    auto my_fun = [msg](int x,int y) -> int {int c = x+y; cout<<msg<<c<<endl;};

    my_fun(a,b);





}

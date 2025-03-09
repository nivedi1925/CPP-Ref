// Templates for generic programming. compilter will write propper expanded functions at compile time on behalf of you

#include <iostream>
using namespace std;

template <class T>
T add(T x,T y)
{
    return x+y;
}


int main()
{
    cout << add<int>(1,2)<<endl;
    cout << add<float>(1.2f,4.5f)<<endl;
    cout << add<string>("Niran ","D")<<endl;
    
}

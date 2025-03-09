// We write a generic class that can be used fr different data types
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Sum
{
    public:
        T v1;
        T v2;
    Sum(T x,T y)
    {
        v1 = x;
        v2 = y;
    }

    void add()
    {
        cout << v1+v2 <<endl;
    }
};


int main()
{
    Sum<int> obj1(2,3);
    obj1.add();

    Sum<string> obj2("Nira","D");
    obj2.add();
}

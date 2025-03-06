#include <iostream>
using namespace std;


class Person
{
    int weight;
    public:
    Person(int c=0)
    {
        weight = c;
    }

    void operator ++()
    {
        // this is using pre increnet operator
        ++weight;

    }

    void operator ++(int)
    {
        // thsi is for post increemnt operator overloading. Just the difference is the 'int' is parameter
        ++weight;
    }

    void dispay()
    {
        cout << weight<<endl;
    }

};

int main()
{
    Person p1(25);
    p1.dispay();
    ++p1;   // pre incremet overloding
    p1.dispay();
    p1++; //post increemt operastor overloading
    p1.dispay();


}

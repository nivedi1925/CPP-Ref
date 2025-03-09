#include <iostream>
using namespace std;

class Base{
    public:
        virtual void show() = 0; //this is how we make virtual class in cpp this is also virtual function and this is called pure virtual function
        // class having pure virtual function (=0) is called abstract class in cpp

};

class child
{
    public:
    void show()
    {
        cout <<"Child class ";
    }
};

int main()
{
   // Base b = Base(); --> cant do this as Base is an abtract class

   child c = child();
   c.show();

}


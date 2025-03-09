#include<iostream>
using namespace std;

class Base
{
    public:
      virtual  void show()
        {
            cout <<"Base";
        }
};

class Child1:public Base{
    public:
        void show()
        {
            cout<< "Child1 \n";

        }
};

class Child2:public Base{
    public:
        void show()
        {
            cout<< "Child2 \n";
        }
};

int main()
{
    Child1 c1;
    Child2 c2;
    
    Base *ptr;
    c1 =  Child1();
    ptr = &c1;
    ptr->show();

    c2 = Child2();
    ptr = &c2;
    ptr->show();
    return 0;
}

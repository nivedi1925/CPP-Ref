#include <iostream>

using namespace std;

class Base
{
    private:
        int my_private_variable = 10;
    public:
        int my_public_variable = 11;
    protected:
        int my_protected_variable = 12; 
};

class Child:Base
{
    //acces private -- not allowed
    // protected --- allowed since its derived
    // public -- always
    public:
        int test_variable =111111;
    void display()
    {
        
        cout<< "\n\n\n from child class"<<endl;
        cout << my_protected_variable << endl;
        cout << my_public_variable<< endl;
    }

};

int main()

{

    Base b;
    
    cout << b.my_public_variable;
    Child c;
    cout << c.test_variable;
    c.display();



}

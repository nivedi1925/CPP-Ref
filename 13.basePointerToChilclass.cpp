/*This topic comes under polymorphism.
Base class pointer can point to the object of derived class.
 But it will not be ableto access members which as specific to child class. 
 It can only access members which are iherited from base class.*/
#include <iostream>
using namespace std;


class Base
{
    public:
        int weight;
    
    void setWeight(int weight)
    {
        this->weight = weight; // Remember this is pointer so use this->member and not this.member

    }
};

class Child: public Base{

    public:
        int height;
    
    void setheight(int height) 
    {
        this->height = height; 
    }
};


int main()
{
    Base *ptr;
    ptr = new Child(); //new key word is used to allocate memory
    ptr->setWeight(23); // this is allowed
    //ptr->setheight(43); //Not allowed

    // Lets createreverse i.e create pointer of child class and access base class
    //Child *ptr2 = new Base();// Not possible


    cout <<" Success";


}

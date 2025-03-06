/* When we make operators like +,-,*,/  work for user defined types like objects and structurs.
This is known as operator overloading.*/
#include <iostream>
using namespace std;
class Myclass
{
    private:
        int weight;
    public:
    Myclass(){};  // create default constructor 
    Myclass(int x)
    {
        weight = x;
    }

    Myclass operator + (Myclass object)
    {
        Myclass temp_object;
        temp_object = weight + object.weight;
        return temp_object;
    }

    void display()
    {
        cout << "\n\n"<< weight << endl;
    }
};


int main()
{
    Myclass obj_1(20),obj_2(30);
    (obj_1+obj_2).display();

    int a =12,b=23,c;
    c = a+b;
    cout << c;
}


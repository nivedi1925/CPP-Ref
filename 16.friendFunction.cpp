#include <iostream>
using namespace std;

class Alpha
{
    private:
        int a;

    public:
        Alpha(int a)
        {
            this->a = a;
        }

        friend void fun();  
};

class Beta
{
    private:
        int b;
    
    public:
        Beta(int b)
        {
            this->b = b;
        }
        friend void fun();

};

void fun()
{
    Alpha a(5);
    Beta b(10);

    int c = a.a+b.b;
    cout << endl<< c << endl;
}

int main()
{
    fun();
}

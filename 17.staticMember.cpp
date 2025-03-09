#include <iostream>
using namespace std;

class base
{
    public:
     static int a;
};
int base:: a = 1;

int main()
{
    cout << base::a<<endl;
    base::a = 12;

    cout << base::a<<endl;

}

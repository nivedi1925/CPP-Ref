/* https://stackoverflow.com/questions/32161199/what-exactly-is-a-namespace-and-why-is-it-necessary


Without namespace
  std::cout << "Jai Shree Ram."
  
  Note: here :: --> is called scope resolution operator
  */

#include <iostream>
using namespace std;



namespace myNamespaceRam
{
    void print(){
        cout << "Jai Shree Ram.\n";
    }
}

namespace myNamespaceKrishna
{
    void print(){
        cout << "Jai Shree Krishna.\n";
    }
}

int main()
{
    cout << "Jai Shree Ram from std.\n";
    myNamespaceKrishna::print();
    myNamespaceRam::print();
}

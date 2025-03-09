#include <iostream>
#include <string>
using namespace std;

int main()
{

     int a,b,c;
     cout << "Enter first number  ";
     cin >> a;
     cout << "enter second number  ";
     cin >> b;

     try
     {
        if(b==0)
        {
            string str = "devided by zero";
            throw str;
        }
        else{
            c =a/b;
            cout << c<<endl;
        }

     }
     catch(string y)
     {
        cout << "error = "<<y << endl;
     }
     
    
    
}



#include <iostream>


int main()
{
    int a[10];

    for(int i=0;i<=9;i++)
        a[i] = i;

        
    for(int i:a)
        std::cout << i << std::endl;

}


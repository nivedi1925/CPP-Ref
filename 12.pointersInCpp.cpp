#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        int weight;
    
    public:

        void setWeight(int a)
        {
            weight = a;
        }

        int getWeight()
        {
            return weight;
        }

};


class BMW
{
    private:
        
        Car *ptr;
    public:
    int topSpeed;
    BMW(int weight=0,int tspeed = 0)
    {
        topSpeed = tspeed;
        ptr = new Car;   // new keyword is used to create memory in heap.THink about java and c++ differences in this case.
        ptr->setWeight(weight);

    }

    int getWeight()
    {
        return ptr->getWeight();
    }
    
};

int main()
{
    BMW b(3000,350);
    cout << "Weight of car = "<<  b.getWeight()<<endl;
    cout << "Top speed" << b.topSpeed<<endl;
}

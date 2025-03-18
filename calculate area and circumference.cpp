/*******Design a Circle class with radius as an attribute
 * . Write methods to calculate area and circumference.
************/
#include <iostream>
using namespace std;
class Circle
{
    public:
    int radius;
    int pi=3.14;
    
    void display()
{
    cout<<"calculate the Area:"<< 3.14*radius*radius<<endl;
    cout<<"calculate the circumference:"<<2*3.14*radius<<endl;
}
  
};


int main()
{
    Circle obj;
    cout<<"Enter the radius:";
    cin>>obj.radius;
    cout<<"Enter the circumference:";
    cin>>obj.radius;
    obj.display();
    return 0;
}

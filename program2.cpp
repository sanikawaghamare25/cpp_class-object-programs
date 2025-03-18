/**Write a program to create a Rectangle class with length and width attributes and a
  method to calculate area.*/


#include <iostream>
using namespace std;
class Rectangle
{
 private:
 double lenght;
 double width;
 public:
 Rectangle(double l, double w)
 {
 lenght=l;
 width=w;
 }
 double area()
 {
     return lenght*width;
 }
 
 
};

int main()
{
    // Rectangle A;
    double lenght, width;
    cout<<"Enter lenght of Rectangle is:";
    cin>>lenght;
    cout<<"Enter width of Rectangle is:";
    cin>>width;
    
    Rectangle rect(lenght, width);
    cout << "The area of the rectangle is: " << rect.area() << endl;



    return 0;
}

/*Create a Car class with attributes like model, brand, and price.
Create an object and display the details.
*/

#include <iostream>
using namespace std;
class Car
{
    public:
   string model;
   string brand;
   double price;
   
   public:
   
   void display()
   {
       cout<<"obj.model ="<<model<<endl;
       cout<<"obj.brand ="<<brand<<endl;
       cout<<"obj.price ="<<price<<endl;
   }
   
   
};

int main()
{
  Car obj;
  obj.model="Targen ";
  obj.brand="i20";
  obj.price=100000;
  obj.display();

    return 0;
}

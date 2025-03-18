/***Create a Book class with attributes like title, author, price. 
 * Implement a method to display book details.
 ****/
#include <iostream>
using namespace std;
class Book
{
    public:
 string title;
 string author;
 double price;
 void display()
 {
     cout<<"obj.title name:"<<title<<endl;
     cout<<"obj.author name:"<<author<<endl;
     cout<<"obj.Book price:"<<price<<endl;
 }
 
 
};

int main()
{
   Book obj;
   obj.title="c++ programmig";
   obj.author="Bjarne Stroustrup";
   obj.price=200;
   obj.display();

    return 0;
}

/** Implement a Student class with attributes name, rollNo, marks. 
Write methods to set and get these attributes**/


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Method to set name
    void setName(string studentName)
    {
        name = studentName;
    }

    // Method to set roll number
    void setRollNo(int studentRollNo)
    {
        rollNo = studentRollNo;
    }

    
    void setMarks(float studentMarks)
    {
        marks = studentMarks;
    }

    // Method to get name
    string getName() 
    {
        return name;
    }

    // Method to get roll number
    int getRollNo() 
    {
        return rollNo;
    }

    // Method to get marks
    float getMarks() {
        return marks;
    }
};

int main() {
    Student student;  // Creating an object of Student class

    // Setting attributes using setter methods
    student.setName("sanika");
    student.setRollNo(10);
    student.setMarks(85.5);

    // Getting and displaying attributes using getter methods
    cout << "Student Information:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNo() << endl;
    cout << "Marks: " << student.getMarks() << endl;

    return 0;
}

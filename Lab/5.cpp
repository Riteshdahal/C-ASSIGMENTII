#include <iostream>
using namespace std;

class Person
{

    char name[15];
    int phone;

public:
    void getName()
    {
        cout << "Enter your Name Here " << endl;
        cin >> name;
    };
    void getPhone()
    {
        cout << "Enter Your Phone Number " << endl;
        cin >> phone;
    };

    void display()
    {
        cout << " Your name is  " << name << endl;
        cout << "Your Phone Number is " << phone << endl;
    }
};

class Student : virtual public Person
{
public:
    int studentId;
    void getsId()
    {
        cout << "Enter Your Student Id Number " << endl;
        cin >> studentId;
        cout << "Your Student Id is" << studentId << endl;
    }
};

class Employee : virtual public Person
{
public:
    int employeeId;
    void geteId()
    {
        cout << "Enter Your employee Id Number " << endl;
        cin >> employeeId;
        cout << "Your employee Id is" << employeeId << endl;
    }
};

class Manager : public Student, public Employee
{
};

int main()
{
    Manager m;
    m.getName();
    m.getPhone();
    m.display();
};

#include <iostream>
#include <cmath>
using namespace std;

class Circle
{

public:
    float pi = 22 / 7;
    float radius;
    float area;
    void getRadius()
    {
        cout << "Enter the radius : " << endl;
        cin >> radius;
    };

    void Area()
    {
        area = pi * (radius * radius);
    }
    void display()
    {

        cout << "Area of figures  " << area << endl;
    }
};

class Cylinder : public Circle
{
public:
    float height;

    void getHeight()
    {
        cout << "Enter the Height of Cylinder : " << endl;
        cin >> height;
    };
    void Area()
    {
        area = 2 * pi * radius * radius + 2 * pi * radius * height;
    };
};

int main()
{
    Circle obj1;
    Cylinder obj2;
    obj1.getRadius();
    obj1.Area();
    obj1.display();
    obj2.getRadius();
    obj2.getHeight();
    obj2.Area();
    obj2.display();
}
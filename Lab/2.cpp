#include<iostream>
using namespace std;

class Shape{

    public:
    virtual void getArea()=0;
};

class Triangle: public Shape{

    int b,h;
    public:
    void getdata(){
        cout<<"Enter the breadth and height of Triangle: "<< endl;
        cin>> b>>h;
    }
    void getArea(){

        cout<<"Area of Triangle is "<< (b*h)/2 << endl;
    }
};

class Rectangle: public Shape{

    int l,b;
    public:
    void getdata(){
        cout<<"Enter the  lenght and breadth of Rectangle : "<< endl;
        cin>> l>>b;
    }
    void getArea(){
        cout<<"Area of Rectangle is "<<l*b<< endl;
    }
};
class Circle: public Shape{

    float r;
    public:
    void getdata(){
        cout<<"Enter the radius of circle "<< endl;
        cin>> r;
    }
    void getArea(){
        cout<<"Area of Circle is "<<(22*(r*r))/7<< endl;
    }
};

int main(){
    Triangle obj1;
    Rectangle obj2;
    Circle obj3;
    obj1.getdata();
    obj2.getdata();
    obj3.getdata();
    obj1.getArea();
    obj2.getArea();
    obj3.getArea();
    
}
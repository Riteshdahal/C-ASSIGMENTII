//overriding function

#include <iostream>
using namespace std;
class Dog
{

public:
    void bark()
    {
        cout << "Woff" <<endl;
    }
};
class Hound : public Dog
{

public:
    void bark()
    {
        cout << "sniff"<<endl;
    }
};

int main()
{
    Dog D1;
    Hound H1;
    H1.bark();
    D1.bark();
}
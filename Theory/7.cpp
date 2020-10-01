
//class D doesn't requiere the constructor as it inherits everything from base class;

#include <iostream>
using namespace std;

class B
{

public:
    int x;
    B()
    {
        x = 0;
    }
    B(int z)
    {
        x = z;
    }
    void display()
    {
        cout << "The Number is " << x << endl;
    }
};

class D : public B
{
};

int main()
{
    D a;
    a.x = 3;
    a.display();
}

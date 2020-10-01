#include <iostream>
using namespace std;

class Pizza
{

public:
    virtual void get_price() = 0;
};

class Mushroom : public Pizza
{

public:
    void get_price()
    {

        cout << " The Price of Mushroom Pizza is "
             << "Rs 200" << endl;
    };
};

class Ham : public Pizza
{

public:
    void get_price()
    {
        cout << "The Price of Ham Pizza  is "
             << " Rs 150 " << endl;
    };
};

class Chesse : public Pizza
{
public:
    void get_price()
    {
        cout << "The Price of Chesse Pizza is "
             << "Rs 100 " << endl;
    };
};

int main()
{

    cout << "The Menu of the Pizza and its Variety " << endl;

    Chesse c1;
    Ham h1;
    Mushroom m1;
    m1.get_price();
    h1.get_price();
    c1.get_price();
}
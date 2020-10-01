#include <iostream>
using namespace std;

class Employee
{
public:
    int phone;

};

class administrative : virtual public Employee
{
    public:
    int administrativeID;

};

class academic : virtual public Employee
{
   public:
   int academicId; 
};

class HOD : public administrative, public academic
{
    public:
    int HodPhone;

    
};

int main()
{
HOD obj;
obj.phone= 12345; //phone is assing to base class
obj.phone=6789;//Again assigning
obj.administrativeID=12;
obj.academicId=34;
obj.HodPhone=1234567890;

cout<<" Phone "<<obj.phone <<endl;

cout<<" AdministartiveID "<<obj.administrativeID <<endl;


cout<<" ACademic "<<obj.academicId <<endl;

cout<<"HoD phone"<<obj.HodPhone <<endl;






}
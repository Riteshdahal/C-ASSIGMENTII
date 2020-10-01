#include<iostream>
using namespace std;

int main(){

    int a , b;
    cout<<"Enter two Number a and b "<<endl;
    cin>>a;
    cin>>b;

    try{

        if(b==0)
        throw b;

        else{
            cout<<"The Division between a and b is "<<a/b<<endl;
        }

   
    }
        catch(int b){
            cout<<"You can't divide with Zero "<<b<<endl;
        }



}
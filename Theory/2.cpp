#include<iostream>
using namespace std;

class Myclass{

    int i;
    float f;
    public:
    Myclass()
{
    i=0;
    f=0.0;
}
Myclass(int x,float y){
    i=x;
    f=y;
}

Myclass operator ++(){
    i=i+1;
    f=f+1.0;
    return *this ;//this pointer which points to the called object
}

Myclass Show(){
    cout<<"The Elment are "<<i <<"\n"<<f<<endl;
    
}


};
int main(){
    Myclass a;
    ++a;
    a.Show();
    return 0;

}
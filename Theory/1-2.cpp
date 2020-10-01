#include<iostream>
using namespace std;
class Dog{
    public:
    void bark(){
        cout<<"Woff"<<endl;

    };
    void bark(int num){
        for(int i=0;i<num;i++){
            cout<<"Woooooooof";
        }
    }

};
int main(){
    Dog d1;
    d1.bark();
    d1.bark(3);
}
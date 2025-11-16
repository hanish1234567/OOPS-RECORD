#include<iostream>
using namespace std;
class Demo{
    private:
    int number;
    public:
    Demo(int n){
        number=n;
        cout<<"constructor called.number="<<number<<endl;
    }
    ~ Demo(){
        cout<<"destructor called.number="<<number<<endl;
    }
    void display(){
        cout<<"Value of number is:"<<number<<endl;
    }
};
int main(){
    cout<<"creating first object"<<endl;
    Demo obj1(10);
    cout<<"creating second object"<<endl;
    Demo obj2(20);
    cout<<"Displaying values"<<endl;
    obj1.display();
    obj2.display();
    cout<<"Existing main"<<endl;
    return 0;
}

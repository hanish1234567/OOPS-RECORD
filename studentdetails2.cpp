#include<iostream>
using namespace std;
class student{
    Private:
    int rollno;mark1,mark2,mark3,total;
    char name[50];
    float avg;
    Public;
    void getdata();
    void calculate();
    void display();
};
void student :: getdata()
{
    cout<<"Enter the rollno:";
    cin>>rollno;
    cout<<:"Enter the name:";
    cin>> name;
    cout<<"Enter the marks:";
    cin>>mark1>>mark2>>mark3;
}
    void student :: calculate()
    {
        Total=mark1+mark2+mark3;
        avg=total/3
    }
    void student::display()
    {
        cout<<"Rollno:"<<rollno;
        cout<<"Name:"<<name;
        cout<<"Mark1:"<<mark1;
        cout<<"Mark2:"<<mark2;
        cout<<"Mark3:"<<mark3;
        cout<<"Total:"<<total;
        cout<<"Average:"<<avg;
    }
    int main()
    {
        student s[60]
        int i=0,n;
        cout<<"Enter the value of n:";
        cin>>n;
        for(i=o;i<n;i++)
        {
            s[i].getdata();
            s[i].calculate();
        }
        for(i=0;i<n;i++)
        s[i].display();
        }

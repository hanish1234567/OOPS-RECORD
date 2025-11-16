#include<iostream>
using namespace std;
class Book
{
    private:
    int AccNo,Pages;
    char Bookname[100],Isbno,Author[50];
    float price;
    public:
    void getdata();
    void display();
};
void Book::getdata()
    {
        cout<<"Enter the AccNo";
        cin>>AccNo;
        cout<<"No.of pages in Book";
        cin>>Pages;
        cout<<"Book Name:";
        cin>>Bookname;
        cout<<"Enter the Isbno:";
        cin>>Isbno;
        cout<<"Enter the Author name:";
        cin>>Author;
        cout<<"Enter the price of book";
        cin>>price;

    }
    void Book::display()
    {
        cout<<"AccNo:"<<AccNo;
        cout<<"Book Name:"<<Bookname;
        cout<<"IsbNo:"<<Isbno;
        cout<<"Author:"<<Author;
        cout<<"Pages:"<<Pages;
        cout<<"price:"<<price;
    }
    int main()
    {
        Book B[60];
        int i=0,n;
        cout<<"Enter the non value:";
        cin>>n;
        for(i=0;i<n;i++)
        {
            B[i].getdata();
            B[i].display();
        }
    }

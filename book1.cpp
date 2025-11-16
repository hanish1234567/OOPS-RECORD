#include <iostream>
using namespace std;

class Book {
private:
    int pages;
    char Bookname[50], ISBNO[50], Author[50];
    float price;
    int AccNo;

public:
    void getdata();
    void display();
};

void Book::getdata() {
    cout << "Enter the Book AccNo: ";
    cin >> AccNo;
    cout << "Enter the number of pages: ";
    cin >> pages;
    cout << "Enter the Book Name: ";
    cin.ignore(); // clear input buffer before getline
    cin.getline(Bookname, 50);
    cout << "Enter the Author Name: ";
    cin.getline(Author, 50);
    cout << "Enter the Book ISBN No: ";
    cin.getline(ISBNO, 50);
    cout << "Enter the Book Price: ";
    cin >> price;
}

void Book::display() {
    cout << "\nBook Details:\n";
    cout << "AccNo: " << AccNo << endl;
    cout << "Name: " << Bookname << endl;
    cout << "ISBN No: " << ISBNO << endl;
    cout << "Author: " << Author << endl;
    cout << "Pages: " << pages << endl;
    cout << "Price: " << price << endl;
}

int main() {
    Book s;
    s.getdata();
    s.display();
    return 0;
}

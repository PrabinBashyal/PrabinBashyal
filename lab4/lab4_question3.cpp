/*Modify Q.2 to add base class sales that holds an array of three 
floats so that it can record the dollar sales of a particular 
publication for the last three months. Include getdata() function to 
get three Sales amount from the user and a putdata() function to 
display sales figures. Alter the book and tape classes so they are 
derived from both publication and sales. An object of class book or 
tape should input and output sales data along with its other data.*/

#include<iostream>
using namespace std;
class sales
{
    protected:
 float arr[3];
public:
void getdata()
{
    
cout<<"Enter 3 Sales amount "<<endl;
 for(int i=0;i<3;i++)
    {
cin>>arr[i];
    }
}
void putdata()
{
    cout<<"Total 3 Sales amount of books Are="<<endl;
    for(int i=0;i<3;i++)
    {
    
cout<<"=Rs."<<arr[i]<<endl;
    }
}

};
class publication {
protected:
    char title[30];
    float price;
public:
    void getdata() {
        cout << "Enter the title of the publication: ";
        cin >> title;
        cout << "Enter the price of the publication: ";
        cin >> price;
    }
    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class book : public publication,sales {
protected:
    int pagecount;
public:
    void getdata() {
        publication::getdata(); 
        sales::getdata();
        cout << "Enter the page count: ";
        cin >> pagecount;
    }
    void putdata() {
        publication::putdata(); 
         sales::putdata();
        
        cout << "Page count: " << pagecount << endl;
    }
};

class tape : public publication,sales{
protected:
    float playingTime;
public:
    void getdata() {
          publication::getdata(); 
           sales::getdata();
        cout << "Enter the playing time (in minutes): ";
        cin >> playingTime;
    }
    void putdata() {
         publication::putdata(); 
          sales::putdata();
        cout << "Playing time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    book b;
    tape t;

    cout << "Enter data for book:" << endl;
    b.getdata();
    cout << endl << "Book data:" << endl;
    b.putdata();

    cout << endl << "Enter data for tape:" << endl;
    t.getdata();
    cout << endl << "Tape data:" << endl;
    t.putdata();

    return 0;
}

/*Create a class publication that stores the title and price of a 
publication. From this class derive two classes:book, which adds a 
page count and tape, which adds a playing time in minutes. Each of 
these three classes should have getdata() function to get its data 
from the user at the keyboard and putdata() function to display its data */
#include<iostream>
using namespace std;

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

class book : public publication {
protected:
    int pagecount;
public:
    void getdata() {
        publication::getdata(); 
        cout << "Enter the page count: ";
        cin >> pagecount;
    }
    void putdata() {
        publication::putdata(); 
        
        cout << "Page count: " << pagecount << endl;
    }
};

class tape : public publication {
protected:
    float playingTime;
public:
    void getdata() {
          publication::getdata(); 
        cout << "Enter the playing time (in minutes): ";
        cin >> playingTime;
    }
    void putdata() {
         publication::putdata(); 
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

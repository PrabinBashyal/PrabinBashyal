#include<iostream>
using namespace std;
class Rupees{
    int rupee, paisa;

    public:
        Rupees(int ru, int pa){
            rupee=ru;
            paisa=pa;
        }

        int getRupees(){
            return rupee;
        }
        int getPaisa(){
            return paisa;
        }

        void show(){
            cout << "Rs." << rupee << "." << paisa;
        }
};

class Dollars{
    int dollar, cent;
    public:
        Dollars(){}
        Dollars(Rupees r){
            float totalRupees = (r.getPaisa())/100 + r.getRupees();
            float totalDollars = totalRupees / 98.51;
            dollar = (totalDollars);
            cent = (totalDollars-dollar) * 100;
        }

        void show(){
            cout << "$" << dollar << "."<< cent;
        }

};

int main(){
    Rupees r(1000, 24);
    Dollars d;
    d = r;
    r.show();
    cout << endl;
    d.show();
    return 0;
}



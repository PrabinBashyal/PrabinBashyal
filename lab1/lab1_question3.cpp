#include <iostream>
using namespace std;

class check {
    int store_quantity;
    int order_quantity;

public:
    void input() {
        cout << "ENTER TOTAL MEDICINE QUANTITY: ";
        cin >> store_quantity;
        cout << "ENTER TOTAL ORDER QUANTITY: ";
        cin >> order_quantity;
    }

    void output1() {
        if (order_quantity > store_quantity) {
            cout << "Not enough quantity" << endl;
        }
    }

    void output2() {
        if (order_quantity < store_quantity) {
            if (store_quantity > 40) {
                cout << "Your order is accepted" << endl;
            }
            else if (store_quantity <= 40 && order_quantity >= 16) {
                cout << "You cannot order more than 16 items" << endl;
            }
            
        }
    }
};

int main() {
    check a;
    a.input();
    a.output1();
    a.output2();
    return 0;
}

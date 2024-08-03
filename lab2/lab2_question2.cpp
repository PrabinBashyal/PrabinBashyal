#include <iostream>
using namespace std;
const float exchangerate = 133.29;
class nepalcurrency;
class uscurrency
{
    float dollar, cents;

public:
    uscurrency()
    {
        dollar = 0.0;
        cents = 0.0;
    }
    uscurrency(float d, float c)
    {
        dollar = d;
        cents = c;
    }
    void read()
    {
        cout << "Enter the money of dollar and cents:" << endl;
        cin >> dollar >> cents;
    }
    float getuscurrency(){
        return dollar+cents/100.0;
    }
    float tonepalirupees()
    {
        return getuscurrency() * exchangerate;
    }
    uscurrency operator+(const uscurrency &a)
    {
        uscurrency temp;
        temp.dollar = dollar + a.dollar;
        temp.cents = cents + a.cents;
        if (temp.cents >= 100)
        {
            temp.dollar += temp.cents / 100;
            temp.cents = (int)temp.cents % 100;
        }
        return temp;
        }
        uscurrency operator-(const uscurrency &a)
        {
            uscurrency temp;
            temp.dollar = dollar - a.dollar;
            temp.cents = cents - a.cents;
            if (temp.cents < 0)
            {
                temp.dollar -= 1;
                temp.cents =temp.cents+ 100;
            }
            return temp;
        }
        void display()
        {
            cout << "Dollar=" << dollar << "cents=" << cents << endl;
        }
    };
    class nepalcurrency
    {
        float rupees, paisa;

    public:
        nepalcurrency()
        {
            rupees = 0.0;
            paisa = 0.0;
        }
        nepalcurrency(float r, float p)
        {
            rupees = r;
            paisa = p;
        }
        void read()
        {
            cout << "Enter the money in rupees and paisa" << endl;
            cin >> rupees >> paisa;
        }
        float getnepalicurrency()
        {
            return rupees + paisa / 100.0;
        }
        float touscurrency()
        {
            return getnepalicurrency()/exchangerate;
        }
        void display()
        {
            cout << "rupees=" << rupees << "paisa=" << paisa;
        }
    };
    int main()
    {
        uscurrency usd1;
        nepalcurrency nrs;
        usd1.read();
        usd1.display();
        float nrsValue = usd1.tonepalirupees();
        cout << "USD to NRS: " << nrsValue << " rupees" << endl;
        nrs.read();
        nrs.display();
        float usdValue = nrs.touscurrency();
        cout << "NRS to USD: " << usdValue << " dollars" << endl;
    
        return 0;
}

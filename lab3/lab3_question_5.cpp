// Program to convert  24 hr format to 12 hr format.

#include <iostream>
#include <string>

using namespace std;

class TwentyFour;

class Twelve
{
    int hr, min, sec;
    string meridian;

public:
   
    
Twelve(int h = 0, int m = 0, int s = 0, string me=0)
    {
        hr = h;
        min = m;
        sec = s;
        meridian=me;
    }
    operator TwentyFour();

    void show()
    {
        cout << hr << ":" << min << ":" << sec << " " << meridian << endl;
    }
};

class TwentyFour
{
    int hr, min, sec;

public:
    
   
TwentyFour(int h = 0, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
        
    }
    int getH()
    {
        return hr;
    }

    int getM()
    {
        return min;
    }

    int getS()
    {
        return sec;
    }

    void show()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};

Twelve::operator TwentyFour()
{
    if (meridian == "AM")
    {
        return TwentyFour(hr, min, sec);
    }
    else
    {
        if (hr == 12)
        {
            return TwentyFour(hr, min, sec);
        }
        else
        {
            return TwentyFour(hr + 12, min, sec);
        }
    }
}

int main()
{
    TwentyFour t24;
    Twelve t12(5, 55, 55, "PM");

    t24 = t12;

    t12.show();
    t24.show();

    return 0;
}
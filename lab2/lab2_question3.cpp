#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    complex(int r, int i) {

        real=r;
        imaginary=i;
        }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    void show() {
        cout << real << " - " << imaginary << "i" << endl;
    }
    
    void show1() {
        cout << real << " * " << imaginary << "i" << endl;
    }
    
    void show2() {
        cout << real << " / " << imaginary << "i" << endl;
    }
friend complex operator +(complex, complex); 
    friend complex operator -(complex, complex);  
    friend complex operator *(complex, complex); 
    friend complex operator /(complex, complex); 
    
};

complex operator +(complex c1, complex c2)
{
    return complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

complex operator -(complex c1, complex c2)
{
    return complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

complex operator *(complex c1, complex c2)
{
    return complex(c1.real * c2.real, c1.imaginary * c2.imaginary);
}

complex operator /(complex c1, complex c2)
{
    return complex(c1.real / c2.real, c1.imaginary / c2.imaginary);
}
int main()
{
    complex c1(4, 5);
    complex c2(2, 2);

    complex sum = c1 + c2;
    complex diff = c1 - c2;
    complex mul=c1*c2;
    complex div=c1/c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();
    
    cout << "Multiply: ";
    mul.show1();

    cout << "Difference: ";
    div.show2();
    return 0;
}

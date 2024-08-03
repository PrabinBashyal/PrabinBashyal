#include<iostream>
using namespace std;
class A;
class B;

class A

{
    int n1;
    public
    A{
n1=0;
    }
    A(int n)
    {
n1=n;
    }
};
class B
{
    private:
    int n2=10;
    friend void C(A,B);

};
void C (A r1,B r2)
{
    int n2=10;
    int temp=r1.n1;
    r1.n1=r2.n2;
    r2.n2=temp;
    cout<<"Before swapping n1=5 and n2=10"<<endl;
    
     cout << "After swapping: n1 = " << r1.n1 << " and n2 = " << r2.n2 << endl;
}
int main()
{
    A obj1(5);B obj2;
    C(obj1,obj2);
    return 0;

}
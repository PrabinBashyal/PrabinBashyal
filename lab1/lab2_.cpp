#include<iostream>
using namespace std;
class A;
class B
{
    private:
    int n1=5;
friend void C(A,B);
};
class A
{
    private:
    int n1=5;
    friend void C(A,B);

};
void C(A r1,B r2)
{
    int sum=r1.n1+r2.n1;
    cout<<"sum is"<<sum<<endl;
}
int main()
{
    A obj1;B obj2;
    C(obj1,obj2);
}
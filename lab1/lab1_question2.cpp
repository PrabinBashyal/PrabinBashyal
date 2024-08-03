#include<iostream>
using namespace std;
class numbers
{
    int a;
    int b;
    int c;
    int max;
    int min;
    public:
    void getinfo()
    {
        cout<<"enter any 3 numbers";
        cin>>a>>b>>c;
    }
    void result1()
    {
        if(a>b && a>c)
        
            cout<<"a is  maximum"<<a<<endl;
        
        else if (b>a && b>c)
        
            cout<<" b is maximum"<<b<<endl;
         else
        cout<<"c is maximum"<<c<<endl;
    }
     void result2()
    {
        if(a<b && a<c)
        
            cout<<"a is minimum"<<a<<endl;
        
        else if (b<a && b<c)
        
            cout<<" b is minimum"<<b<<endl;
         else
        cout<<"c is minimum"<<c<<endl;
    }

};
int main()
{
numbers a;
a.getinfo();
a.result1();
a.result2();
return 0;
}
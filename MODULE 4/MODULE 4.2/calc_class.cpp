/* WAP to create simple calculator using class*/
#include<iostream>
using namespace std;

class CALc
{
    protected:
    int a;
    int b;

    public:

    void addition()
    {
        a=30;
        b=10;

        cout<<"addition is : "<<a+b<<endl;
    }
    void sub()
    {
        a=30;
        b=10;

        cout<<"sub is :"<<a-b<<endl;
    }
    void multiplication()
    {
        a=30;
        b=10;

        cout<<"multiplication is : "<<a*b<<endl;
    }
    void divison()
    {
        a=30;
        b=10;

        cout<<"divison is : "<<(float)a/b<<endl;
    }
    void mod()
    {
        a=30;
        b=10;

        cout<<"mod is : "<<a%b<<endl;
    }

};
int main()
{
    CALc r;
    r.addition();
    r.sub();
    r.multiplication();
    r.divison();
    r.mod();
}
#include<iostream>
using namespace std;
class binary
{
   
    public:
    int a,b;
    binary()
    {
        a=0;
        b=0;
    }
    binary(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"The value of a and b are:"<<endl;
        cout<< "a = " << a<<endl;
        cout<< "b = "<< b <<endl;
    }
    binary operator +(const binary & o )
    {
        binary d3;
        d3.a= a +o.a;
        d3.b= b+ o.b;
        return d3;
    }
    binary operator *(const binary& o)
    {
        binary d4;
        d4.a=a*o.a;
        d4.b=b*o.b;
        return d4;
    }
    binary operator -(const binary& o)
    {
        binary d5;
        d5.a=a-o.a;
        d5.b=b-o.b;
        return d5;
    }
};
int main()
{
    binary d1(5,6);
    d1.display();
    binary d2(10,20);
    d2.display();
    binary d3;
    d3=d1+d2;
    binary d4,d5;
    d4=d1*d2;
    d5=d1-d2;
    cout<<"\n"<<"The sum operation is"<< d3.a <<"and"<<endl<< d3.b;
    cout<<"\n"<<"The product operation is"<< d4.a <<"and"<<endl<< d4.b;
    cout<<"\n"<<"The difference operation is"<< d5.a <<"and"<<endl<< d5.b;

}
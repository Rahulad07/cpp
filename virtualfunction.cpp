#include<iostream>
using namespace std;
class abstract
{
    public:
    int a;
    virtual void  getval()=0;
    void displayval()
    {
        cout<<"you have enter the value "<<a<<endl;
    }   
};
class derived: public abstract{
    public:
    void getval()
    {
        cout<<"Enter the value : ";
        cin>>a;
    }
};
int main()
{
    derived obj;
    obj.getval();
    obj.displayval();
}
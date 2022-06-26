#include<iostream>
using namespace std;
class base
{
    public:
    int a;
};
class derived : public base
{
    public:
    derived(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"The value is :" << a <<endl;
    }
    
};
int main()
{
    derived obj(10);
    obj.display();
    return 0;
}
#include <iostream>
using namespace std;
//base class
class base
{
public:
    // int a,b;
    void operation(int a, int b)
    {

        cout << "The value of a and b is :" << a << " and " << b << endl;
        cout << "The sum of the two number is :" << a + b << endl;
    }
    protected:
    float height=5.11;
};
//derived class
class derived : public base{};
//protected access and protected inheritance
class derivedproc: protected base
{
    public:
    void display()
    {
        cout<<"this is protected access specifier"<<endl;
        cout<<"The height is " << height <<endl;

    }
};
//overriding member function 
class overriding
{
  private:
   float c;
   public:
    int e,f;
    void getval(int d)
    {
        c=d;
    } 
    void messege()
    {
        cout<<"This is function overwritten code " <<endl;
    }
    void getval()
    {
        cout<<"Enter The value of e and f"<<endl;
        cin>>e>>f;
    }
    void multi()
    {
        int add= e*f*c;
        cout<<"The multiplication of your number with my defultr argument is :" << add <<endl;
    }

};
int main()
{
    derived obj;
    obj.operation(20, 10);
    derivedproc obj1;
    obj1.display();
    overriding obj2;
    obj2.messege();
    obj2.getval(10);
    obj2.getval();
    obj2.multi();

}
#include<iostream>
using namespace std;
class check 
{
    public:
    static int a;
    void displayval()
    {
        cout<<"Functio call"<<endl;
        a++;
    }
    void pointer(int x)
    {
        int  *ptr;
        ptr=&x;
        cout<<"The address of value is "<<ptr<<endl;
        cout<<"The original vlaue is "<< x <<endl;
        cout<<"The pointer value is "<< *ptr<<endl;
    }
};
int check::a=0;
int main()
{
check obj;
obj.displayval();
obj.displayval();
cout<<"Total object call : "<<check::a<<endl;
obj.pointer(10);
}
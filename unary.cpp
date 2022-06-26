#include<iostream>
using namespace std;
class unary
{
    private:
    int a;
    public:
    unary ()
    {
        a=0;
    
    }
 
 
    // postfix 
    unary operator --()
    {
        unary temp;
        temp.a=--a;
        // temp.b=--b;
        cout<<"prefix vlaue of a is "<<temp.a<<endl;
        return temp;
    }
    //prefix
    unary operator--(int)
    {
        unary temp;
        
        temp.a=a--;
        // temp.b=b--;
        cout<<"postfix value of a is, "<<temp.a<<endl;
        return temp;
    }

};
int main()
{
unary obj,obj1;
obj1=--obj;
obj1=obj--;

}
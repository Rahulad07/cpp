#include<iostream>
using namespace std;
class check 
{
    private:
    int a;
    public:
    check()
    {
        a=0;
    }
    friend int getval(check);

};
int getval(check t)
{
    t.a= 5 +t.a;
    cout<<"The val is" <<t.a;
    return t.a;
}
int main()
{
    check obj;
    getval(obj);
    // cout<<getval(obj);
    
}
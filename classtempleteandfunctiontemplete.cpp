#include <iostream>
using namespace std;
// class templete
template <class t>
class check
{
public:
    t var;
    t operation(t n)
    {
        return var;
    }
};
template <class g>
class derived : public check<g>
{
public:
    g call()
    {
        cout << "This is calling form derived class " << endl;
    }
};
// function templete
template <typename d>
d multi(d a, d b)
{
    return (a * b);
}
int main()
{
    derived<int> obj;
    obj.call();
    cout << "The vlaue is " << obj.operation(10) << endl;
    int result = multi<int>(2, 4);
    cout << "The function tmeplete opration is " << result << endl;
    return 0;
}

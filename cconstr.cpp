#include<iostream>
using namespace std;
class sample
{
    int id;
    public:
    void init(int x)
    {
id=x;
    }
    void display()
    {
        cout<<endl<<"id="<<id;
    }
};
int main()
{
    sample o;
    o.init(10);
    o.display();

    sample o1(o);
    o1.display();
    return 0;
}
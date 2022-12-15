#include<iostream>
using namespace std;
class calculator
{
    public:
    virtual void calculate()=0;

};
class add:public calculator 
{int p,q;
    public:
    void calculate(int x,int y)
    {
p=x;
q=y;
    }
    int getresult()
    {
        return x+y;
    }
};
class mul:public calculator
{
    int p,q;
    public:
     void calculate(int a,int b)
     {
p=a;
q=b;
    }
    int getresult()
    {
        return a+b;
    }
};
int main()
{
calculator *c=new add;
c->calculate(3,4);
c->getresult(c);
c=new mul;
c->calculate(5,6);
c->getresult();
}
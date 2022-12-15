#include<iostream>
using namespace std;
class vehicle
{
    public:
    virtual void engine()=0;

};
class car:public vehicle
{
    public:
    void engine()
    {
        cout<<"engine is 650 cc \n";
    }
};
class bike:public vehicle
{
    public:
    void engine()
    {
        cout<<"engine is 120 cc \n";
    }
};
int main()
{
  vehicle *v=new bike;
  v->engine();
  
}
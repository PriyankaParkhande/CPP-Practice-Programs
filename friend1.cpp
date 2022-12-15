#include<iostream>
using namespace std;
class max
{
    int x,y;
    public:
    int setvalue(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
friend int findmaxvalue(max m);
};
int findmaxvalue(max m)
{
    if(m.x>m.y)
    {
        cout<<"x is greater\n";
    }
    else{
    cout<<"y is greater";
    }
}
int main()
{
max m;
m.setvalue(10,20);
findmaxvalue(m);
}
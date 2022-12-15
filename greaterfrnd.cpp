#include<iostream>
using namespace std;
class greater
{
    int a;
    public:
void setdat(int a)
{
    this->a=a;
}
friend void show(greater a1,greater1 a2);

};
class greater1
{
    int b;
    public:
void setdat(int b)
{
    this->b=b;
}
friend void show(greater a1,greater1 a2);

};
void show(greater a1,greater1 a2)
{
    if(a1.a>a2.b)
    {
        cout<<"a is greater";
    }
    else
    {
        cout<<"b is greater";
    }
}
int main()
{
 greater a1;
 a1.setdat(2);
 greater1 a2;
 a2.setdat(4);
 show(a1,a2);
}
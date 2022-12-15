#include<iostream>
using namespace std;
class a
{
    private:
    int x,y;
    public:
    a()
    {
        cout<<"enter two numbers:\n";
        cin>>x>>y;
        cout<<x<<"\t"<<y;
    }
    a(int p,int q)
    {
        x=p;
        y=q;
       
        cout<<x<<"\t"<<y;
    }
    a(int s,float t)
    {
        x=s;
        y=t;
        
        cout<<x<<"\t"<<y<<"\n";
    }
};
int main()
{
a a1,a2(10,20),a3(30,40.55f);
}
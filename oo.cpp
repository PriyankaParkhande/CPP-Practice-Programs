#include<iostream>
#include<math.h>
using namespace std;
class inc
{
int a;
public:
inc()
{
    a=10;
}
void operator ++ () 
{
    ++a;
    
}
void show()
{
    cout<<a<<"\n";
}
};
int main()
{
    inc i;
    cout<<"after oo\n";
    ++i;
    i.show();
}
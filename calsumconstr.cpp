#include<iostream>
using namespace std;
class calsum
{
int *ptr,sum;
public:
calsum(int x[])
{
    ptr=x;
    sum=0;
}
void show()
{
    for(int i=0;i<5;i++)
    {
        sum=sum+ptr[i];
    }
    cout<<"\n sum of all elemment is: "<<sum;
}
};
int main()
{
    int a[]={10,20,30,40,50};
    calsum c(a);
    c.show();
}
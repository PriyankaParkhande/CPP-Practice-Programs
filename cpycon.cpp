#include<iostream>
using namespace std;
class a
{
    int n,b;
    public:
a(int x,int y)
{
    n=x;
    b=y;
}
a(a &ref)
{
    n=ref.n;
    b=ref.b;
}
void show()
{
    cout<<n<<"\t"<<b<<"\n";
}
};
int main ()
{
a a1(10,20);
a a2=a1;
a1.show();
a2.show();

}
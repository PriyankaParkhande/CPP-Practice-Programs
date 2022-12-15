#include<iostream>
using namespace std;
class mathfunction
{
    private:

    int n,i;
   public:
mathfunction(int no)
{
    n=no;
}
void findfactor()
{
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
          cout<<i<<"\t";
      }
    }
}
};
int main()
{
    int n;
   
    cout<<"enter the no whic want to find factor \n";
    cin>>n;
     mathfunction m(n);
    m.findfactor();
}

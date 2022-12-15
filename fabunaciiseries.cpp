#include<iostream>
using namespace std;
class fabunaciiSereies
{
int no;
int a=0;
int b=1;
int c;
public:
void printSeries(int no)
{
  for(int i=1;i<=no;i++)
  {
      cout<<a<<"\t";
      c=a+b;
      a=b;
      b=c;
  }
}
};
int main()
{
    int no;
    cout<<"enter the no where you warnt to priny series";
    cin>>no;
    fabunaciiSereies f;
    f.printSeries(no);
    return 0;

}
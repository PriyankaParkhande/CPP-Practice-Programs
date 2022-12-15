#include<iostream>
using namespace std;
class PrimeClass//for array operation
{
    int no;
    int count;
    public:
    //fun for set data
    void setdata(int no)
    {
        this->no=no;
    }
    //fun for print prime no
    void primeno()
    {
    for(int i=1;i<=no;i++)
    {
        count=0;
        for(int j=1;j<=no;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        cout<<i<<"\t";
    }
    }
};

int main()
{
    int no;
    cout<<"enter number\n";
    cin>>no;
    PrimeClass p;//obj declaration
    p.setdata(no);//fun call for set data
    p.primeno();//fun call for dispaly nos
}

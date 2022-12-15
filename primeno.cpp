#include<iostream>
using namespace std;
class primeNo
{
    int no;
    int count =0;
    public:
    void FindNoPrime(int no )
    {
        this->no=no;
        for(int i=1;i<=no;i++)
        {
            if(no%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<"the given no  "<<no<<" is prime number.";
        }
        else
        {
            {
                cout<<"the given no "<<no<<" is not prime prime number";
            }
        }
    }
};

int main()
{
    int no;
    cout<<"enter the no: \n";
    cin>>no;
primeNo p;
p.FindNoPrime(no);
return 0;


}
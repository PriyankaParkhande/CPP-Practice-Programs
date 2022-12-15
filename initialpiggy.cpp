#include<iostream>
using namespace std;
class addamount// class
{
    int initial=50;
    int final,i;
    int current=final;
    public:
      addamount()//constructor
      {
          cout<<"\n no amount to be added to piggybank\n";
      }
      addamount(int addam)//parameterize construct
      {
          
          while(addam!=0)
          {
          for(int i=0;i<5;i++)
              {
                  final=initial+addam;
                  final++;
              }
          }
      }
      void nameamount()//for display amount
      {
        cout<<"final ammount of piggy bank\n"<<final;
      }
};
int main()
{
    int addam;
    cout<<"enter amount you want to add\n";
    for(int i=0;i<5;i++)
    {
     cin>>addam;
    }
    if(addam==0)
    {
        addamount ad;
    }
    addamount ad(addam);//call 
    ad.nameamount();

}
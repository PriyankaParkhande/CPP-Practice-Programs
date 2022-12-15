#include<iostream>
using namespace std;
class addamount// class
{
    int initial=50;
    int final;
    public:
      addamount()//constructor
      {
          cout<<" no amount to be added to piggybank\n";
      }
      addamount(int addam)//parameterize construct
      {
         final=initial+addam;
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
     cin>>addam;
     if(addam==0)
    {
        addamount ad;
    }
    addamount ad(addam);//call 
    ad.nameamount();
    

}
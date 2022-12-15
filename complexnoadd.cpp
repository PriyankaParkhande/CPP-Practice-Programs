#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    int real,imaginary,r1,i1,r2,i2;
    public:
    complex()
    {
cout<<"default constructor call\n";
    }
    complex(int r1,int i1,int r2,int i2)
    {
      this->r1=r1;
      this->i1=i1;
      this->r2=r2;
      this->i2=i2;
    }
    void display(){
         real=r1+r2;
       imaginary=i1+i2
       cout<< real <<"+" << imaginary << "i";
    }
    // int operator +(complex c1)
    // {
    //    real=r1+r2;
    //    imaginary=i1+i2
   // }
};
int main()
{
    int real,imaginary,r1,i1,r2,i2;
   
    cout<<"enter the real part/number\n";
    cin>>r1;
    cout<<"enter the imaginary part/number\n";
    cin>>i1;
     cout<<"enter the real part/number\n";
    cin>>r2;
    cout<<"enter the imaginary part/number\n";
    cin>>i2;
    
complex c1(r1,i1,r2,i2);
c1.display();

}
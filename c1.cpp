#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class complex
{
    int real,imaginary;
    public:
    complex()
    {
cout<<"default constructor call\n";
real=imaginary=0;
    }
    complex(int real,int imaginary)
    {
      this->real=real;
      this->imaginary=imaginary;
      
    }
    void display(){
        
       cout<< real <<"+" << imaginary << "i";
    }
     complex operator +(complex c1)
    {
        complex temp;
        temp.real=real+ c1.real;
        temp.imaginary=imaginary+c1.imaginary;
       // return (c);
    }
};
int main()
{
   complex c1(5,7),c2(7,5);
   complex c=c1+c2;

c.display();

}
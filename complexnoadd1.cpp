#include<iostream>
using namespace std;
class complex//class declaration
{
int real,imag;
public:
void set()//fun for set data
{
cout<<"enter real & imag part\n";
cin>>real>>imag;
}
friend complex operator+(complex,complex);//friend fun
void display()//display complex no
{
cout<<"the sum of complex no is\n"<<real<<"+"<<imag<<"i";
}
};
complex operator+(complex c1,complex c2)//friend fun call
{
complex temp;//obj creation
temp.real=c1.real+c2.real;
temp.imag=c1.imag+c2.imag;
return(temp);
}
int main()

{
complex c1,c2;//obj creation
c1.set();
c2.set();
c1=c1+c2;//operator overloading
c1.display();//display fun call
return(0);
}
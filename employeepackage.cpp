/* wap  to create progranm using inheritance employee,frelancer,permanent employee.
employee is parent class and with 3 fields ID,NAME,ADDRESS, and Freelancer is child class with methoid void setsal(int hour,int phcost)
and clculate the total sal
in perment employee class contain method void package(int package) this fun accept the total sal and calculate the total sal
2.
wap  class name as parent with constructor and accept the single parameter of type int and create the class name as the child ith single
 parameter with constructor pass the value child constrctor to paraent constructor.

*/

#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    protected:
    int id;
    char name[90],add[90];
    public:
    
};
class freelancer:public employee
{
    protected:
    int hour,phcost;
    public:
    void setinfo(int i,char n[],char a[],int hour,int phcost)
    {
        id=i;
        strcpy(this->name,n);
        strcpy(this->add,a);
         this->hour=hour;
        this->phcost=phcost;
    }
    
    
};
class peremp:public freelancer
{
    private:
     int package;
    public:
    void pack()
    {
        int perdaysal=hour*phcost;
      package=perdaysal*360;
      cout<<"yearly package of employee is: \n"<<package;
      

    }
};
int main()
{
    int hour,phcost;
    int id;
    char name[90],add[90];
    cout<<"\n enter the id,name and adress of employee \n";
    cin>>id>>name>>add;
    cout<<"\n enter the hour and per hour cost of employee \n";
    cin>>hour>>phcost;
peremp f;
f.setinfo(id,name,add,hour,phcost);
f.pack();

}
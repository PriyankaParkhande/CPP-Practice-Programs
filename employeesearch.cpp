#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    int id,sal,flag=0;
    char name[50];
    public:
    int setvalue(int id,char name[],int sal)
    {
        this->id=id;
        this->sal=sal;
        strcpy(this->name,name);
    }
  int operator ==(employee e) {
      if(strcmp(this->name,e.name)==0 && this->id==e.id && this->sal==e.sal)
      {
          return 1;
      }
      else{
          return 0;
      }

  }
    int show()
    {
        cout<<id<<"\t"<<name<<"\t"<<sal<<"\n";
    }
};
int main()
{
    employee e[5];

    int id,sal,flag=0;
    char name[50];
    cout<<"display data:\n";
    for(int i=0;i<5;i++)
    {
        cout<<"enter the id,name and sallury of employee:\n";
        cin>>id>>name>>sal;
    }

    employee emp;
    cout<<"enter the name ,id and sal of employee you want to search:\n";
    cin>>name>>id>>sal;
emp.setvalue(id,name,sal);
    for(int i=0;i<5;i++)
    { 
        if(e[i]==emp)
        {
            flag=1;
            break;
        }
    }
    if(flag=0)
    {
        cout<<"employee found\n";
    }
    else{
        cout<<"employee not found\n";
    }
}
#include<iostream>
#include<string.h>
using namespace std;

class Customer{
    int id;
    char name[30];
    char add[30];

    public:
    void setdata(int id, char name[], char add[])
    {
        this->id=id;
        strcpy(this->name,name);
        strcpy(this->add,add);
    }

   int operator ==(Customer C2){
        //searching element.
        if(strcmp(this->add,C2.add)==0){
            return 1;
        }
    }
};

int main()
{
    int id;
    char name[30];
    char add[30];
    int size;

    Customer *C;
    cout<<"\n enter the size of customer:\n";
    cin>>size;
    C=(Customer*)malloc(sizeof(C)*size);

    for(int i=0; i<=size; i++)
    {
        cout<<"enter the id,name and address details of customer:\n";
        cin>>id>>name>>add;
        C[i].setdata(id, name, add);
    }

    Customer c2;
    cout<<"\n Enter the address you want to search:-\n";
    cin>>add;
    c2.setdata(id, name, add);
    int flag;

    for(int i=0;i<=size;i++)
    {
        if(C[i]==c2)
        {
            flag=1;
        }
    }

    if(flag)
    {
        cout<<"\n  customer found";
    }
    else{
        cout<<"\n customer not found";
    }

}
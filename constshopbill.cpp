#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class product
{int id,price,qty;
char name[90];
public:
void setid(int id)
{
    this->id=id;
}
int getid()
{
    return id;
}
void setname(char name[])
{
    strcpy(this->name,name);
}
char *getname()
{
    return name;
}

void setprice(int price)
{
    this->price=price;
}
int getprice()
{
    return price;
}

void setqty(int qty)
{
    this->qty=qty;
}
int getqty()
{
    return qty;
}


};
class shop
{
    product *prod;
    public:
    void setbill(product p[])
    {
      prod=p;
    }
    void showbill()
    {
int grandsum=0;
for(int i=0;i<5;i++)
 {
int id=prod[i].getid();
char *name=prod[i].getname();
int price=prod[i].getprice();
int qty=prod[i].getqty();
int total=price*qty;
grandsum=grandsum+total;

cout<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<"\t"<<total<<"\n";

  }
  cout<<"total bill"<<grandsum;
 }

};

int main()
{
 shop s;

 product p[5];
 char name[90];
 int id;
 int rate;
 int qty;
 for(int i=0;i<5;i++)
 {
     cout<<"enter the name,id,price and qty \n";
     cin>>name>>id>>rate>>qty;
     p[i].setname(name);
     p[i].setprice(rate);
     p[i].setqty(qty);
     p[i].setid(id);
     s.setbill(p);
     s.showbill();
     return 0;
 }
}

#include <iostream>
#include <string.h>
using namespace std;
class productrak
{
    int pid, price;
    char name[50], compname[50];

public:
    int setvalue(int pid, char name[], int price, char compname[])
    {
        this->pid = pid;
        this->price = price;
        strcpy(this->name, name);
        strcpy(this->compname, compname);
    }
    int operator==(productrak pro)
    {
        if (this->pid= pro.pid && strcmp(this->name, pro.name) == 0 && this->price ==pro.price && strcmp(this->compname, pro.compname) == 0)
            return 1;
    }

    // void show()
    // {
    //     cout << pid << "\t" << name << "\t" << price << "\n";
    // }
};
int main()
{
    

    int pid, price, flag;
    char name[50], compname[50];
   // cout << "display data:\n";
    productrak p[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the pid,name and price and compname  of productrak:\n";
        cin >> pid >> name >> price >> compname;
        p[i].setvalue(pid,name,price,compname);

    }
    // p->setvalue(pid,name,price,compname);
    productrak pro;
    cout << "enter the pid ,name  price and compname of productrak you want to search:\n";
    cin >> pid >> name >> price >> compname;
    pro.setvalue(pid, name, price, compname);
    // pro.show();
    for (int i = 0; i < 5; i++)
    {
        if (p[i] == pro)
        {
            flag = 1;
           
           // break;
        }
    }
    if (flag)
    {
        cout << "product found\n";
    }
    else
    {
        cout << "product not found\n";
    }
}
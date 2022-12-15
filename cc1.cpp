#include <iostream>
#include<string.h>
using namespace std;
class student
{
int rno;
char name[90];
double fee;
public:
student(int,char[],double);
student(student &t)
{
    rno=t.rno;
    (name,t.name);
}
void display();
void disp()
{
    cout<<endl<<rno<<"\t"<<name;
}
};
student::student(int no,char n[],double f)
{
    rno=no;
    strcpy(name, n);
    fee=f;
}
void student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
    student s(1000,"priya",10000);
    s.display();
    
    student priya(s);
    priya.disp();

    return 0;
}

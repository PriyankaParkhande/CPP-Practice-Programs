
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	protected:
		char m_no[10];
		char name[50],address[50];
public:
	
	person()
	{
		
		cout<<"\n calling defualt constructor person********:"<<"\n";
	}
	person(char n[],char m[],char ad[])
	{
		
		/*strcpy(this->name,name);
			strcpy(this->address,address);
			this->m_no=m_no;*/
			cout<<"calling paramaterize  constructor";
	}
	

};
class student:public person
{
	private:
	   int 	r_no,t_marks;
	public:
		student()
		{
			cout<<"enter the person detials:"<<"\n";
		}
		student(char name[],char address[],char m_no[],int r_no,int t_marks)
		{
			cout<<"parametrize student constructor"<<"\n";
			strcpy(this->name,name);
			strcpy(this->address,address);
			strcpy(this->m_no,m_no);
			this->r_no=r_no;
			this->t_marks=t_marks;
		}
		//cout<<"student class executed";
		void display()
		{
			cout<<name<<"\t"<<address<<"\t"<<m_no<<"\t"<<r_no<<"\t"<<t_marks<<"\n";
		}
};
int main()
{
	
	long int r_no,t_marks;
		char name[50],address[50],m_no[10];
		cout<<"enter name of person:"<<"\n";
		cin>>name;
		cout<<"enter address of person:"<<"\n";
		cin>>address;
		cout<<"enter mobile of person:"<<"\n";
		cin>>m_no;
		cout<<"enter roll no of student:"<<"\n";
		cin>>r_no;
		cout<<"enter total marks of student:"<<"\n";
		cin>>t_marks;
	student s(name,address,m_no,r_no,t_marks);//parametrize constructor call
	s.display();//display fun call
}
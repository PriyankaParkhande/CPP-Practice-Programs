#include<iostream>
#include<string.h>
using namespace std;
class sepratepn{
protected:
int no[10];
public:

virtual void sort(int no[])=0;

};
class sortarray:public sepratepn
{
	public:
	void sort(int no[])
	{
	
	for(int i=1;i<=9;i++)
	{
		int t=no[i];
		if(t>0)
		continue;
		int j=i-1;
		while(j>=0 && no[j]>0)
		{
			no[j+1]=no[j];
			j--;
		}
		no[j+1]=t;
	}
	cout<<"sorted ara is array \n";
		for(int i=1;i<=9;i++)
	{
	cout<<no[i];	
	}
    }
};

int main()
{
	int no[10];
	sortarray s;
	
	cout<<"enter element in array \n";
	for(int i=1;i<=9;i++)
	{
		cin>>no[i];
	}
	
	s.sort(no);
	
}
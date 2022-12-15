#include<iostream>
#include<algorithm>
using namespace std;
class permutation
{
int no,l,r,a,i;
public:
void getno(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	}	
	void findpermutaion(int a[],int n)
	{
		cout<<"permutaions are\n";
		do
		{
			cout<<a[0]<<a[1]<<a[2]<<"\n";
		}
		while(next_permutation(a,a+n));
	}
	
};
int main()
{
	int a[]={1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	permutation p;
	p.findpermutaion(a,n);
	return 0;
}
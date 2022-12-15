
#include<iostream>
#include<string.h>
#include<limits>
using namespace std;
class arrayFinding{
protected:
int arr[10], k;
public:

virtual int findkth(int arr[],int k)=0;

};
class findkthelement:public arrayFinding
{
	//int l1,l2;
int l1=INT_MIN;
int l2=INT_MIN;
	
public:
 int findkth(int arr[],int k)
{
  for(int i=0;i<5;i++)
   {
	if(arr[i]>l1)
	{
		l2=l1;
		l1=arr[i];
		
	}
	else if(arr[i]>l2 && arr[i]<l1)
	{
		l2=arr[i];
	}
	
   }
   cout<<"second heightest no is"<<l2; 
}

};
int main()
{
int arr[10],k;

  findkthelement f;
  cout<<"enter element in array";
for(int i=0;i<=5;i++)
{
    cin>>arr[i];
}
  f.findkth(arr, k);

}
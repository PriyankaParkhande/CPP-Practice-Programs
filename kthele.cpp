#include<iostream>
#include<string.h>
using namespace std;
class arrayFinding{
protected:
int arr[10], k;
public:

virtual int findkth(int arr[],int k)=0;

};
class findkthelement:public arrayFinding
{
public:
findkth(int arr[],int k)
{

}

};
int main()
{
int arr[10],k;

  findkthelement f;
  cout<<"enter element in array";
for(int i=0;i<=10;i++)
{
    cin>>arr[i];
}
  f.findkth(arr, k);

}
#include<iostream>
#include<string.h>
using namespace std;
class arrayReverse
{
    public:
    void arrayRev(int a[50],int size)
    {
        
        for(int i=size;i<a[i];i--)
        {
            cout<<a[i];
        }
        
    }
};
int main()
{
 int a[50];
 int size;
 cout<<"ennter the sizw of array\n";
 cin>>size;
 cout<<"entetr the element array:\n";
 for(int i=0;i<size ;i++)
 {
     cin>>a[i];
 }
    arrayReverse a1;
    a1.arrayRev(a,size);
}
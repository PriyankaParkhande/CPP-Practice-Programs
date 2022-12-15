#include<iostream>
using namespace std;
class revarray
{

    public:
    void arrayrev(int a[],int n)
    {
        cout<<"reverse of array is:\n";
         for(int i=0;i<n/2;i++)
          {
                 int temp=a[i];
                 a[i]=a[n-i-1];
                 a[n-i-1]=temp;
          }   
         for (int i=0;i<n;i++)	
          {
              cout<<a[i];
          }
    }
    void max(int a[],int n)
    {
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(a[i]<a[j])
               {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
           }
       }
       cout<<"max element in an array is: \n";
      for(int i=0;i<=0;i++)
      {
          cout<<a[0]<<"\n";
      }
    }
    void min(int a[],int n)
    {
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(a[i]>a[j])
               {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
           }
       }
       cout<<"min element in an array is: \n";
      for(int i=0;i<=0;i++)
      {
          cout<<a[0]<<"\n";
      }
    }

    
};
int main()
{
    int a[10],n,arr[10];
revarray r,r1;
cout<<"enter the size of the array\n";
cin>>n;
cout<<"enter the elements in an array \n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
r.arrayrev(a,n);
r1.max(a,n);
r1.min(a,n);
}
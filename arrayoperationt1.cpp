#include<iostream>
using namespace std;
class arrayoperation//for array operation
{
    public:

    void arrRev(int a[],int size)//for array rev
    {
 cout<<"reverse of array is:\n";
 //for reverse array
         for(int i=0;i<size/2;i++)
          {
                 int temp=a[i];
                 a[i]=a[size-i-1];
                 a[size-i-1]=temp;
          }   
         for (int i=0;i<size;i++)	
          {
              cout<<a[i];//for print reverse arrayt
          }

          //for finding largest element in array
          for(int i=0;i<size;i++)
       {
           for(int j=i+1;j<size;j++)
           {
               if(a[i]<a[j])
               {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
           }
       }
       cout<<"\n \n largest element in an array is: \n";
      for(int i=0;i<=0;i++)
      {
          cout<<a[0]<<"\n";//for print largest no
      }


    }
    
};
int main()
{
    int size;
    cout<<"enter the size of array\n";
    cin>>size;//for input size
    int a[size];//array declaratuon
    cout<<"enter element in array\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    arrayoperation a1;//obj creation
    a1.arrRev(a,size);//fun call for arry rev
    
}
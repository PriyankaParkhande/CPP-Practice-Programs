#include<iostream>
using namespace std;
class findingarrray//abstract class
{
public:
virtual int findkth(int arr[],int k)=0;//pure virtual fun

};
class findingkthele:public findingarrray
{

    public:
    int findkth(int arr[],int k)
    {
        for(int i=0;i<5;i++)
        {
         for(int j=i+1;j<5;j++)
         {
             if(arr[i]>arr[j])
             {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
        }
        cout<<"segregate array is: \n";

        for(int i=0;i<5;i++)
        {
             cout<<arr[i]<<"\t";
        }

        
    }


};
int main()
{
    int arr[5],k;
   
    cout<<"enter elements in an array: \n";
     for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
         findingkthele f;//child class obj
    f.findkth(arr,k);//fun call
}
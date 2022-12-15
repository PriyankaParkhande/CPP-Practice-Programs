#include<iostream>
#include<string.h>
using namespace std;
class overloadingArray
{
	int temp;
	public:
		overloadingArray(int a[])
		{
			cout<<"enter integer in the array";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<5;i++)
			{
				for(int j=i+1;j<5;j++)
				{
					if(a[i]>a[j])
					{
						temp=a[j];
						a[j]=a[i];
						a[i]=temp;
					}
				}
			}
            cout<<"sorted array:";
			for(int i=0;i<5;i++)
            {
                cout<<a[i];
            }
			
		
		}
        overloadingArray(int a[],int index)
        {
            for(int i=index;i<5;i++)
            {
                a[i]=a[i+1];
            }
            cout<<"element has been deleted \n";
            cout<<"array after deletion is: \n";
            for(int i=0;i<4;i++)
            {
                cout<<a[i];
            }
        }
        overloadingArray(char ch[])
        {
            cout<<"\n \n char constructor called successfully";
        }
	
};

int main()
{
	int a[5];
    char ch[5]={'a','b','c','d','e'};

    overloadingArray a2(a);
   //overloadingArray a3(a,2);
   // overloadingArray a4(ch);
    return 0;

}

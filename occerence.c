#include<stdio.h>
int main()
{
    int size;
     printf("enter the size of array\n");
     scanf("%d",&size);
int a[size];
int count=0;
int newcount;
int max;
 printf("enter element in array");
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}

for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }

    }
    if(newcount<count)
    {
        newcount=count;
        newcount=a[i];
    }
}
for(int i=0;i<size;i++)
{
     printf("occerence of no is : %d %d",a[i], newcount);
}

}

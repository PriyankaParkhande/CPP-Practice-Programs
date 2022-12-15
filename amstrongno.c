#include<stdio.h>
int main()
{
int i,no;
int result=0;
int ono;
ono=no;
int rem;
 printf("enter no :\n ");
 scanf("%d",&no);
 //logic
while(ono>0)
{
    rem=ono%10;//for rev no
    result+=rem*rem*rem;//cube
    ono/=10;
}
//for printing no
if(rem=no)
{
 printf("the given no is amstrong no");
}
else
{
 printf("the given no is not amstrong no");
}
}
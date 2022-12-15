#include<stdio.h>
Reverse(int n)
{
 int rev, num;
  printf("Enter Number: ");
   scanf("%d", &num);
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }

   return sum;
}
void main()
{  
  int num;
Reverse(num);
}
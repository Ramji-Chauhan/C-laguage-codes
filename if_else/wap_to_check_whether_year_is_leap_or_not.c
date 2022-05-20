#include<stdio.h>
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
if(n%400==0)
{
printf("%d is leap year and century year \n",n);
}
else if(n%100==0)
{
printf("%d is not leap year\n",n);
}
else if(n%4==0)
{
printf("%d is leap year\n",n);
}
else
{
printf("%d is not a leap year\n",n);
}
return 0;
}

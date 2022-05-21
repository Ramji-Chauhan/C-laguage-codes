#include<stdio.h>
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
switch(n>0)
{
case 0:
switch(n<0)
{
case 1:
printf("%d is negative number",n);
break;
case 0:
printf("%d is equal to zero",n);
break;
}
break;
case 1:
printf("%d is positive number",n);
break;
}
return 0;
}

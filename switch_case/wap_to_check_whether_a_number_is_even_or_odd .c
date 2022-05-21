#include<stdio.h>
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
switch(n%2==0)
{
case 0:
printf("%d is odd number",n);
break;
case 1 :
printf("%d is even number",n);
break;
}
return 0;
}

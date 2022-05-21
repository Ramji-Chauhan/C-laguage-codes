#include<stdio.h>
int main()
{
int n,a,b,c;
printf("enter 1-add, 2-sub, 3-mul and 4-div: ");
scanf("%d",&n);
printf("enter the two number: ");
scanf("%d%d",&a,&b);
switch(n)
{
case 1:
c=a+b;
printf("sum is equal to %d\n",c);
break;

case 2:
c=a-b;
printf("difference is equal to %d\n",c);
break;

case 3:
c=a*b;
printf("product is equal to %d\n",c);
break;

case 4:
c=a/b;
printf("quotient is equal to %d\n",c);
break;

default:
printf("enter betweem 0 to 5");
break;
}

return 0;
}

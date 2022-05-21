#include<stdio.h>
int main()
{
int n,m;
printf("enter the two numbers: ");
scanf("%d%d",&n,&m);
switch(n>m)
{
case 0:
printf("%d is greater than %d",m,n);
break;
case 1 :
printf("%d is greater than %d",n,m);
break;
}

return 0;
}

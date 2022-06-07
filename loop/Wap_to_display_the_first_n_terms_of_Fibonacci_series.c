#include<stdio.h>
int main()
{
int n,a=0,b=1,s=1,i;
printf("enter the limit: ");
scanf("%d",&n);
printf("%d + %d + ",a,b);
for(i=2;i<n;i++)
{
s=a+b;
a=b;
b=s;
printf(" %d +",s);
}
return 0;
}

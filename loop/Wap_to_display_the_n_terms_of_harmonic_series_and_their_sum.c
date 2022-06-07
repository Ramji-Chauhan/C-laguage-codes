#include<stdio.h>
int main()
{
int i,n,l;
float s=0;
printf("enter the limit of series: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("1/%d + ",i);
s=s+1/(float)i;
}
printf("= %.2f",s);
return 0;
}

#include<stdio.h>
int main()
{
int min,max,i,sum=0,n=1;
printf("enter the range: \n");
scanf("%d%d",&min,&max);
printf("perfect no. in the range: \n");
for(i=min;i<=max;i++)
{
while(n<i)
{
if(i%n==0)
{
sum=sum+n;
}
n++;
}
if(sum==i)
printf("%d ",i);
}
printf("\n");
return 0;
}

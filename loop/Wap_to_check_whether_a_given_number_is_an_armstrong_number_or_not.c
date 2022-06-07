#include<stdio.h>
#include<math.h>
int main()
{
int n,i,temp,r=0,sum=0,c=0;
printf("enter the number: ");
scanf("%d",&n);
temp=n;
for(i=0;n!=0;i++)
{
n=n/10;
c++;
}
n=temp;
for(i=0;n!=0;i++)
{
r=n%10;
n=n/10;
sum=sum+pow(r,c);
}
if(sum==temp)
printf("armstrong");
else
printf("not armstrong");
return 0;
}

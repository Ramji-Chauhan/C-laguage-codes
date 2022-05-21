#include<stdio.h>
int main()
{
int n,i,sum=0,count=1;
printf("how many odd number you want: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("%d\n",count);
sum=sum+count;
count=count+2;
}
printf("sum is %d",sum);
return 0;
}

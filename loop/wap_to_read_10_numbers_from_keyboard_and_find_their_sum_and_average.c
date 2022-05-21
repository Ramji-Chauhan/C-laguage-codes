#include<stdio.h>
int main()
{
int n,i;
float sum=0;
float avg;
printf("enter the numbers: ");
for(i=1;i<=10;i++)
{
scanf("%d",&n);
sum=sum+i;
avg=sum/i;
}
printf("sum is %.2f",sum);
printf("avg is %.2f",avg);
return 0;
}

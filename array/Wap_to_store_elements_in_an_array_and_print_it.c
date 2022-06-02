#include<stdio.h>
int main()
{
int arr[50],n,i;
printf("enter the limit of array: ");
scanf("%d",&n);
printf("enter the elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
return 0;
}

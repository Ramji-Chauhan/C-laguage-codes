#include<stdio.h>
int main()
{
int n,arr1[50],arr2[50],i;
printf("enter the limit of array: ");
scanf("%d",&n);
printf("enter the elements of arr1: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=arr1[i];
}
for(i=0;i<n;i++)
printf("%d",arr2[i]);
return 0;
}

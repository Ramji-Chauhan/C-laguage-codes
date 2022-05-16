#include<stdio.h>
void large(int[],int*,int);
void main()
{
    int arr[50],n,i,max,l;
    printf("enter the number of elements you want to enter in array: \n");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++)
     {
    scanf("%d",&arr[i]);
     }
     large(arr,&l,n);
     printf("%d",l);
}

void large(int arr[],int *q,int p)
{
    int i;
    *q=arr[0];
    for(i=0;i<p;i++)
    {
        if(*q<arr[i])
        *q=arr[i];
        
    }
}
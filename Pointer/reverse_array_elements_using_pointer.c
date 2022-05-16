#include<stdio.h>
void reverse(int[],int);
void main()
{
    int l,arr[50],n,i;
   
    printf("enter the no. of elements you want to enter: \n");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    reverse(arr,n);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}

void reverse(int arr[],int q)
{
    int l,temp,i;
    for(i=0;i<q/2;i++)
    {
    temp=arr[i];
    arr[i]=arr[q-1-i];
    arr[q-1-i]=temp;
    }  
}
    
 

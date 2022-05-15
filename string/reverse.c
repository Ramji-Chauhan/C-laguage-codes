#include <stdio.h>
#include<string.h>
int main()
{
    int i=0,l;
    char arr[50],temp;
    printf("enter the string: ");
    scanf("%s",arr);
    l=strlen(arr);
    for(i=0;i<l/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
    }
    printf("%s",arr);
    return 0;
}

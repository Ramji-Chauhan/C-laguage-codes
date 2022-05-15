#include <stdio.h>
#include<string.h>
int main()
{
    int i=0,l,flag=0;
    char arr[50];
    printf("enter the string: ");
    scanf("%s",arr);
    l=strlen(arr);
    for(i=0;i<=l/2;i++)
    {
    if(arr[i]!=arr[l-i-1]) 
    {
        flag=1;
        break;
    }   
    }
    
    if(flag==0)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}

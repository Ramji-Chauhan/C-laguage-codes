#include <stdio.h>
#include<string.h>
int main()
{
    char arr1[50],arr2[50];
    int i=0;
    printf("enter the string: ");
    fgets(arr1,50,stdin);
    for(i=0;arr1[i]!='\0';i++)
    {
      arr2[i]=arr1[i];
    }
    printf("%s",arr2);

    return 0;
}


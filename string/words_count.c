#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    int i,count=0;
    printf("enter the sentence: ");
    fgets(arr,50,stdin);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' '|| arr[i]=='\n'||arr[i]=='\t')
        count++;
    }
    printf("%d",count);
    return 0;
}


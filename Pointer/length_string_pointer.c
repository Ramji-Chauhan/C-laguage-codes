#include<stdio.h>
#include<string.h>
void length(char[],int*);
void main()
{
    char arr[50];
    int l;
    printf("enter the string: \n");
    fgets(arr,50,stdin);
    length(arr,&l);
    printf("%d",l-1);
}

void length(char arr[],int *q)
{
    int i;
    *q=0;
    for(i=0;arr[i]!='\0';i++)
    {
       (*q)++;
    }
}
    
 
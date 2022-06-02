#include<stdio.h>
#include<string.h>
int main()
{
char ch[50];
int i,c=0;
printf("enter the string: ");
fgets(ch,50,stdin);
for(i=0;ch[i]!='\0';i++)
{
c++;
}
printf("%d",c-1);
return 0;
}

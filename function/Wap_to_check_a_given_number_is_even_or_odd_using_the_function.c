#include<stdio.h>
void evenodd(int);
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
evenodd(n);
return 0;
}

void evenodd(int x)
{
if(x%2==0)
printf("even");
else
printf("odd");
}

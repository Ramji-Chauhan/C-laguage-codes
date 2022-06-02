#include<stdio.h>
int square(int);
int main()
{
int n,c;
printf("enter the number: ");
scanf("%d",&n);
c=square(n);
printf("%d",c);
return 0;
}

int square(int x)
{
int a;
a=x*x;
return a;
}

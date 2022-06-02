#include<stdio.h>
int main()
{
int a,b,c;
int *p,*q;
printf("enter two numbers: ");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
c=(*p)+(*q);
printf("%d",c);
return 0;
}

#include<stdio.h>
void sum(int*,int*,int*);
int main()
{
int a,b;
int *p,*q,c;
printf("enter two numbers: ");
scanf("%d%d",&a,&b);
sum(&a,&b,&c);
printf("%d",c);
return 0;
}
void sum(int*p,int*q,int*x)
{
*x=(*p)+(*q);

}

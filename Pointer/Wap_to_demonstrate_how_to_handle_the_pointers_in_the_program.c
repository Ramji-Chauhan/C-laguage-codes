#include<stdio.h>
int main()
{
int a=5;
int *p;
p=&a;
printf("%d\n",a);
printf("%d\n",*p);
*p=8;
printf("%d\n",*p);
return 0;
}

#include<stdio.h>
void swap(int*,int*);
int main()
{
int n1,n2;
printf("enter the two number: ");
scanf("%d%d",&n1,&n2);
printf("before swaping %d %d\n",n1,n2);
swap(&n1,&n2);
printf("after swaping %d %d",n1,n2);
return 0;
}

void swap(int*x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;

}

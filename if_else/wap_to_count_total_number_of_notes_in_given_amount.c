#include<stdio.h>
int main()
{
int n,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,notes;
printf("enter the amount: ");
scanf("%d",&n);
if(n>=2000)
{
r=n/2000;
n=n%2000;
}
if(n>=500)
{
s=n/500;
n=n%500;
}
if(n>=100)
{
t=n/100;
n=n%100;
}
if(n>=50)
{
u=n/50;
n=n%50;
}
if(n>=20)
{
v=n/20;
n=n%20;
}
if(n>=10)
{
w=n/10;
n=n%10;
}
if(n>=5)
{
x=n/5;
n=n%5;
}
if(n>=2)
{
y=n/2;
n=n%2;
}

notes=r+s+t+u+v+w+x+y;
printf("total notes are: %d",notes);
return 0;
}

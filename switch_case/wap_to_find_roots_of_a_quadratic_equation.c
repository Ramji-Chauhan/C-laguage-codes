#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float R1,R2,D;
printf("enter the value of a,b and c: ");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
switch(D>0 || D==0)
{
case 1:
R1=(-(b)+sqrt(D))/2*a;
R2=(-(b)-sqrt(D))/2*a;
printf("first root is %.2f\n",R1);
printf("second root is %.2f\n",R2);
break;

case 0:
printf("roots does not exist");
}
return 0;
}

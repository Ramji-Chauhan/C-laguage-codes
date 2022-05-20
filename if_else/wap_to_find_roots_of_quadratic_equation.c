#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float R1,R2;
printf("enter the value od a,b and c: ");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0 || D==0)
{
R1=(-(b)+sqrt(D))/2*a;
R2=(-(b)-sqrt(D))/2*a;
printf("roots one is %.2f\n",R1);
printf("roots two is %.2f\n",R2);
}
else
{
printf("roots does not exists\n");
}
return 0;
}

#include<stdio.h>
int main()
{
int n;
float charge;
printf("enter the units: ");
scanf("%d",&n);
if(n>=0 && n<=50)
{
charge=n*0.50;
charge=charge+0.2*charge;
printf("charge is %0.2fRs\n",charge);
}
else if(n>50 && n<=150)
{
charge=n*0.75;
charge=charge+0.2*charge;
printf("charge is %0.2fRs\n",charge);
}
else if(n>150 && n<=250)
{
charge=n*1.20;
charge=charge+0.2*charge;
printf("charge is %0.2fRs\n",charge);
}
else if(n>250)
{
charge=n*1.5;
charge=charge+0.2*charge;
printf("charge is %0.2fRs\n",charge);
}
return 0;
}

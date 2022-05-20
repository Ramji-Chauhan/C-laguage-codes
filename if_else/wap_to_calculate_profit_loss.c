#include<stdio.h>
int main()
{
int cp,sp,profit,loss;
printf("enter the cp and sp: ");
scanf("%d%d",&cp,&sp);
if(cp>sp)
{
loss=cp-sp;
printf("loss of %dRs\n",loss);
}
if(sp>cp)
{
profit=sp-cp;
printf("profit of %dRs\n",profit);
}
return 0;
}

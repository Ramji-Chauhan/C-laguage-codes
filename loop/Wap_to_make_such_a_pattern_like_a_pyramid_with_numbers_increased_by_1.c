#include<stdio.h>
int main()
{
int n=4,i,j,c=1,k,d=1;

for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d ",c);
c++;
}
d=d+2;
printf(" \n");

}

return 0;
}

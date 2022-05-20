#include<stdio.h>
int main()
{
char n;
printf("enter any character: ");
scanf("%c",&n);
if((n>=65 && n<=90)||(n>=97 && n<=122))
{
printf("%c is alphabet\n",n);
}
else if(n>=48 && n<=57)
{
printf("%c is integer\n",n);
}

else
{
printf("%c is special character",n);
}

return 0;
}

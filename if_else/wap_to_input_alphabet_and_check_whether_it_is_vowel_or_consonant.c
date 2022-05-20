#include<stdio.h>
int main()
{
char n;
printf("enter the alphabet: ");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
printf("%c is vowel\n",n);
else
printf("%c is consonant\n",n);
return 0;
}

#include<stdio.h>
#include<string.h>
struct employee
{
char name[50];
int id;
int salary;
};

int main()
{
int i;
struct employee b[10];
printf("enter the name, id and salary of an employee:\n");
for(i=0;i<1;i++)
{
scanf("%s%d%d",&b[i].name,&b[i].id,&b[i].salary);
}
for(i=0;i<1;i++)
printf("%s %d %d",b[i].name,b[i].id,b[i].salary);
return 0;
}

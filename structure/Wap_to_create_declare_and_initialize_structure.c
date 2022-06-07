#include<stdio.h>
#include<string.h>
struct student
{
char name[50];
int rollno;
int marks;
};

int main()
{
int i;
struct student b={"Ramji",40,500};
printf("%s %d %d",b.name,b.rollno,b.marks);

return 0;
}

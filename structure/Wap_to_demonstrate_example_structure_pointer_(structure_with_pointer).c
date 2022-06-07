#include<stdio.h>
struct person
{
int age;
int weight;
};

int main()
{
struct person *p,r;
p=&r;
printf("enter the person's age and weight: ");
scanf("%d%d",&p->age,&p->weight);
printf("age: %d\n",p->age);
printf("weight: %d",p->weight);
return 0;
}

#include<stdio.h>
struct person
{
int age;
int weight;
};
void fun(struct person *z)
{
printf("age: %d\n",z->age);
printf("weight: %d",z->weight);
}
int main()
{
struct person p;
printf("enter the person's age and weight: ");
scanf("%d%d",&p.age,&p.weight);
fun(&p);
return 0;
}







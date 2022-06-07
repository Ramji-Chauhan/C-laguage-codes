#include<stdio.h>
#include<string.h>
struct address
{
char city[50];
int pin;
long int phone_number;
};
struct employee
{
char name[50];
struct address a;
};

int main()
{
struct employee b={"Ramji","rishikesh",249137,8869932039};
printf("%s %s %d %lu",b.name,b.a.city,b.a.pin,b.a.phone_number);
return 0;
}

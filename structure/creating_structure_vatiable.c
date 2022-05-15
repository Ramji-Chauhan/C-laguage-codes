#include<stdio.h>
#include<string.h>
struct Students
{
    char Name[30];
    int Student_Id;
    char Section;
    float Percentage;
};

int main()
{
struct Students first={"Ramji",1,'C',99.99};
struct Students second={"Sachin",2,'C',99.98};
struct Students third={"Utkarsh",3,'C',99.97};

return 0;
}
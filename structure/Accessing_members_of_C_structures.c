#include<stdio.h>
#include<string.h>
struct Students
{
    char Name[30];
    int Student_Id;
    char Section;
    float Percentage;
} first={"Ramji",1,'C',99.99},second={"Sachin",2,'C',99.98},third={"Utkarsh",3,'C',99.97};

int main()
{

printf("%s\n%d\n%c\n%.2f\n",first.Name,first.Student_Id,first.Section,first.Percentage);
printf("%s\n%d\n%c\n%.2f\n",second.Name,second.Student_Id,second.Section,second.Percentage);
printf("%s\n%d\n%c\n%.2f\n",third.Name,third.Student_Id,third.Section,third.Percentage);
return 0;
}
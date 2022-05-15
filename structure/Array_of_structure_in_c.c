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
    struct Students ok[100];
    int i,n;
     printf("enter the no. of entities you want");
      scanf("%d",&n);
       printf("enter the entities\n");
    for(i=0;i<n;i++)
    {
     
      scanf("%s%d%c%f",&ok[i].Name,&ok[i].Student_Id,&ok[i].Section,&ok[i].Percentage);
       

    }
     for(i=0;i<n;i++)
    {
     
   printf("%s\n%d\n%c\n%.2f\n",ok[i].Name,ok[i].Student_Id,ok[i].Section,ok[i].Percentage);
       

    }
 
return 0;
}
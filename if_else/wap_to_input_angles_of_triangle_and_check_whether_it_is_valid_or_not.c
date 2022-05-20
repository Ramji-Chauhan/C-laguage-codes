#include<stdio.h>
int main()
{
int m,n,o;
printf("enter the angles of triangles: ");
scanf("%d%d%d",&m,&n,&o);
if(n+m+o==180)
{
if(n+m<=o || m+o<=n || n+o<=m)
{
printf("angles are valid for triangle\n");
}
}
else
{
printf("angles are not valid for triangle\n");
}
return 0;
}

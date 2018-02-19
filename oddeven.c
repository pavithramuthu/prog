#include<stdio.h>
int main()
{
int n,m,p;
printf("Enter the 2 numbers");
scanf("%d%d",&n,&m);
p=n*m;
if(p%2==0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
return 0;
}

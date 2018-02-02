#include<stdio.h>
int main()
{
int n,i;
printf("enter the number\n");
scanf("%d",&n);
printf("multiplies are ");
for(i=1;i<=25;i++)
{
if(i%5==0)
{
printf("%d\n",i);
}
}
return 0;
}

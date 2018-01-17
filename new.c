#include<stdio.h>
int main()
{
int num=1,n,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
return n;
}

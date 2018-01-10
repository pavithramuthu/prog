#include<stdio.h>
main();
{
int n,rem,result=0,orgn;
printf("enter the number");
scanf("%d",&n);
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
if(result==n)
{
printf("aemstrong");
else
printf("not a armstrong");
}
}

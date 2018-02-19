#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the number");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
printf("%d %d %d",b,d,e);
return 0;
}

#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the number");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
printf("%d %d %d",b,d,e);
f=b+d+e;
printf("%d",f);
return 0;
}

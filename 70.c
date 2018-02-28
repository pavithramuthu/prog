#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b,c=2,i;
clrscr();
printf("enter exponent number");
scanf("%d",&b);
while(b!=0)
{
a=a*c;
--b;
}
printf("%d",a*c);
getch();
}

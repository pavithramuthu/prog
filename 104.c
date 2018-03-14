#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,n=1;
clrscr();
printf("Enter base and exponent number");
scanf("%d%d",&b,&e);
while(e!=0)
{
n=n*b;
--e;
}
printf("\nThe answer is %d",n);
getch();
}

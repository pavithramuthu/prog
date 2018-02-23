#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the number");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("Even");
}
else
{
printf("ODD");
}
getch();
}

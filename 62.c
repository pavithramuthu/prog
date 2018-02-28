#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("Enter number");
scanf("%d",a);
b=a/10;
if((b%10==0)||(b%10==1))
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}

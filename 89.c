#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,rev=0;
clrscr();
printf("Enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
rev=rev*10+digit;
}
printf("\nans is %d",rev);
getch();
}

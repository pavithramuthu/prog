#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
printf("Enter the year:");
scanf("%d",&yr);
if(yr%4==0)
{
if(yr%100==0)
{
if(yr%400==0)
{
printf("This is a leap year",yr);
}
else
{
printf("This is not a leap year",yr);
}
}
else
{
printf("This is a leap year",yr);
}
}
else
{
printf("This is not a leap year",yr);
}
}
getch();
}

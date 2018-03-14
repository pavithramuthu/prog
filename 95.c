#include<stdio.h>
#include<conio.h>
void main()
{
int p,t,r,value;
clrscr();
printf("Enter the  amount P,time T,rate R ");
scanf("%d%d%d",&p,&t,&r);
value=(p*t*r)/100;
printf("\nThe floor value is %d",value);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,gcd,i,lcm;
clrscr();
printf("Enter the numbers");
scanf("%d%d",&a,&b);
for(i=1;(i<=a)&&(i<=b);i++)
{
if((a%i==0)&&(b%i==0))
{
gcd=i;
lcm=(a*b)/gcd;
}
}
printf("\n%d",lcm);
getch();
}

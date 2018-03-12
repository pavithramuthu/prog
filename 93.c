#include<stdio.h>
#include<conio.h>
void main()
{
int celsius,kelvin;
clrscr();
printf("Enter the celsius value");
scanf("%d",&celsius);
kelvin=celsius+273.15;
printf("\nThe kelvin value for %d is %d ",celsius,kelvin);
getch();
}

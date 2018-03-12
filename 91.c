#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,area,volume;
clrscr();
printf("Enter the l,b and h values");
scanf("%d%d%d",&l,&b,&h);
area=2*((l*b)+(b*h)+(h*l));
printf("\nArea of cuboid is %d",area);
volume=l*b*h;
printf("\nvolume of cuboid is %d",volume);
getch();
}

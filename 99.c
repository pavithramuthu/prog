
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter the value of a,b and c");
scanf("%d%d%d",&a,&b,&c);
d=(a*b)%c;
printf("\nAnswer is %d",d);
getch();
}

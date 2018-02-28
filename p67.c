#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=10,c,d,e;
clrscr();
printf("Enter the number");
scanf("%d",&a);
c=a%b;
d=a-c;
e=d+b;
printf("\nnext multiple of 10 is %d",e);
getch();
}

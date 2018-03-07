#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char op;
clrscr();
printf("Enter the  expression\n");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '%':
c=a%b;
printf("\n%d",c);
break;
case '/':
c=a/b;
printf("\n%d",c);
break;
default:
printf(" ");
}
getch();
}

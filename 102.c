#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
clrscr();
printf("Enter the the number ");
scanf("%d",&n);
if(n%2==0)
{
c=n/2;
printf("\nAnswer is %d",c);
}
else
{
printf("\nAnswer is %d",n);
}
getch();
}

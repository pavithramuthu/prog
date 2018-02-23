#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
n=2*i;
if(n==2*i)
{
printf("\nYES");
}
else
{
printf("NO");
}
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
printf("\nEnter the interval");
scanf("%d%d",&l,&r);
if((l<n)&&(n<r))
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}


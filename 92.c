#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,i,m;
clrscr();
printf("Enter the number");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&m);
sum=sum+m;
}
printf("%d",sum);
getch();
}
